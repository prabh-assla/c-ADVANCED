#include <iostream>

class sum{
    private:
    int a, b;

    public:
    sum(int x, int y) : a{x}, b{y} {
        std::cout << "sum has been called" << std::endl;
    };

    sum(){
        std::cout << "default constructor has been called" << std::endl;
    }

    // we are overloading plus operator

    sum operator+ (sum _SUM){
        sum _SUMMATION;
        _SUMMATION.a = a + _SUM.a;
        _SUMMATION.b = b + _SUM.b;
        return _SUMMATION;
    }

    void display(){
        std::cout << a << ' ' << b << std::endl;
    }

};

int main(){

    sum c = sum(1, 3) + sum(4, 5) + sum(1, 1) + sum(4, 8);
    c.display();

return 0;
}