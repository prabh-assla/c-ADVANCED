#include <iostream>

class base{
    public :
        virtual void print(){
            std::cout << "hello mama!" << std::endl;
        }
};

class derived: public base{
    public : 
        void print(){
            std::cout << "hello papa!" << std::endl;
        }
};

int main(){
    base * i = new derived();
    i -> print();

return 0;
}