// static_cast avoid cast from derived to private base pointer

#include <iostream>

class base{
    private :
        int a;

    public :
        void display(){
            std::cout << a << std::endl;
        }
};

class derived : private base{

};

int main(){
    derived d;
    base* b = static_cast <base*> (&d); 
    //if base class becomes public
    //then this compile-time error is removed...
    
return 0;
}