#include <iostream>

class Base{
    public :
    virtual void print(){
        std::cout << "print - base" << std::endl;
    }

    void hint(){
        std::cout << "hint - base" << std::endl;
    }
};

class Derived: public Base{
    public :
    void print(){
        std::cout << "print - derived" << std::endl;
    }

    void hint(){
        std::cout << "hint - derived" << std::endl;
    }
};

int main(){
    Base* b;
    Derived d;
    b = &d;
    b->print(); //calls print of derived
    b->Base::print(); //calls print of base
    b->hint();

return 0;
}