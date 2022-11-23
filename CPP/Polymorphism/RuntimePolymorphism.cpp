#include <iostream>

class base{
    public:
        virtual void display(int a){
            std::cout << "displaying base" << std::endl;
        }
};

class derived : public base{
    public:
        void display(double b) {
            std::cout << "displaying derived" << std::endl;
        }
};

int main(){
    base *ptr = new derived; 
    //stack has assigned memory to the pointer but it hasn't assigned memory to the class instance
    ptr->display(1);

    base *ptr1 = new derived;
    ptr1->display(9.0);

return 0;
}