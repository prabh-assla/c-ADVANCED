#include <iostream>
#include <math.h>

class arithmeticaComplexo{
    private:
    float a;
    float b;

    public:
    arithmeticaComplexo() : a{0}, b{0} {}

    arithmeticaComplexo(float a, float b) : a{a}, b{b} {}

    arithmeticaComplexo operator+ (arithmeticaComplexo& complex){

        arithmeticaComplexo _complex;
            _complex.a = this->a + complex.a;
            _complex.b = this->b + complex.b;
        return _complex;
    }

    arithmeticaComplexo operator- (arithmeticaComplexo& complex){

        arithmeticaComplexo _complex;
            _complex.a = this->a - complex.a;
            _complex.b = this->b - complex.b;
        return _complex;
    }

    arithmeticaComplexo operator* (arithmeticaComplexo& complex){

        arithmeticaComplexo _complex;
        //cannot use _complex() because compiler misunderstands this as if it is a call to a function which isn't possible for case of objects

            _complex.a = ((this->a * complex.a) - (this->b * complex.b));
            _complex.b = ((this->b * complex.a) + (this->a * complex.b));
        return _complex;
    }

    arithmeticaComplexo operator/ (arithmeticaComplexo& complex){

        arithmeticaComplexo _complex;
            _complex.a = ((this->a * complex.a) + (this->b * complex.b)) / (pow(complex.a, 2) + pow(complex.b, 2));
            _complex.b = ((this->b * complex.a) - (this->a * complex.b)) / (pow(complex.a, 2) + pow(complex.b, 2));
        return _complex;
    }

    arithmeticaComplexo(const arithmeticaComplexo &complex){
        a = complex.a + 4;
        b = complex.b + 4;
    }

    float displayA(){
        return a;
    }

    float displayB(){
        return b;
    }

};

std::ostream& operator<< (std::ostream& _COUT, arithmeticaComplexo& complex){
    _COUT << complex.displayA() << " + j" << complex.displayB() << std::endl;
    return _COUT;
}

int main(){
    arithmeticaComplexo complex1(3, 4), complex2(5, 6);
    arithmeticaComplexo complex3(complex1), complex4(complex2);

    std::cout << complex1 << complex2 << complex3 << complex4;

    arithmeticaComplexo complex5;
    complex5 = complex1 + complex2;
    std::cout << complex5;

    complex5 = complex1 / complex2;
    std::cout << complex5;

    complex5 = complex1 * complex2;
    std::cout << complex5;

    complex5 = complex1 - complex2;
    std::cout << complex5;

    return 0;
}