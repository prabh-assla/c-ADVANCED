#include <iostream>

class fraction{

    private:
    int n;
    int d;

    public:
    fraction(){
        n = 0;
        d = 0;
    }

    fraction(int n, int d) : n{n}, d{d} {}

    int lcm(int a, int b) const{
        int max = a, min = b, lcm, index = 0;

        if(b > a){
            max = b;
            min = a;
        }

        do{
            ++index;
            lcm = max*index;
        }while((max*index)%min);

        return lcm;
    }

    fraction operator+ (fraction& f){
        int _n, _d;

        _n = (n*(lcm(d, f.d)/d) + f.n*(lcm(d, f.d)/f.d));
        _d = lcm(d, f.d);

        return fraction(_n, _d);
    }

    fraction operator- (fraction& f){
        int _n, _d;

        _n = (n*(lcm(d, f.d)/d) - f.n*(lcm(d, f.d)/f.d));
        _d = lcm(d, f.d);

        return fraction(_n, _d);
    }

    fraction operator* (fraction& f){
        int _n, _d;

        _n = n*f.n;
        _d = d*f.d;

        return fraction(_n, _d);
    }

    fraction operator/ (fraction& f){
        int _n, _d;

        _n = n*f.d;
        _d = d*f.n;

        return fraction(_n, _d);
    }

    void operator+= (fraction& f){
        n = (n*(lcm(d, f.d)/d) + f.n*(lcm(d, f.d)/f.d));
        d = lcm(d, f.d);
    }

    void display() const{
        std::cout << n << " / " << d << std::endl;
    }

    fraction(const fraction& f){
        std::cout << "copy constructer has been called" << std::endl;
        this->n = f.n;
        this->d = f.d;
    }

};

int main(){
    fraction f0(2, 3), f1(4, 5), f2(6, 7), f3(6, 2), f5(7, 6);
    fraction f4 = f0 + f1 + f2 + f3;
    f4.display();
    f5+=f4;
    f5.display();

return 0;
}