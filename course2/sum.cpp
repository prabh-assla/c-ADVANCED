#include <iostream>

const class fractionSum{
// "const" can only be specified for objects and functions

    private:
    float frac1;
    float frac2;

    public:
    fractionSum(){
        frac1 = 0;
        frac2 = 0;
    }

    fractionSum(float frac1, float frac2) : frac1{frac1}, frac2{frac2} {}

    void display() const{
        std::cout << frac1 + frac2 << std::endl; 
    }  
};

int main(){
    fractionSum(9.56, 7.88).display();

return 0;
}