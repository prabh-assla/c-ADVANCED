#include <iostream>

class abc{
    private :
        int p;

    protected :
        int q;

    public : 
        void display(){
            std::cout << p << " " << q << std::endl;
        }
};

class def{
    private :
        int a;

    protected :
        int b;

    public :
        def(int a = 0, int b = 0) : a{this->a}, b{this->b} {}

        def(abc d){

        }
};