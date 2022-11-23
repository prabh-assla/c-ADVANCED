#include <iostream>

class Base{
    public :
        virtual void show() = 0;
};

class Derived: public Base{
    public :
        void hello(){
            std::cout << "print hello world" << std::endl;
        }
};

int main(){
    Derived b; // also an error since derived class is also abstract in this case...
    return 0;
}