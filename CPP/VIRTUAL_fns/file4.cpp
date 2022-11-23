#include <iostream>

class Base{
    public :
        virtual void show() = 0;
};

class Derived: public Base{
    public :
        void show(){
            std::cout << "show" << std::endl;
        }
};

int main(){
    // Base a; --> error
    Base* b;
    Base* c = new Derived();

    Derived _A_A_A;
    Base* d = &_A_A_A;

    return 0;
}