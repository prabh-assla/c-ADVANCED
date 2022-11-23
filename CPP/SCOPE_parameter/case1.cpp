#include <iostream>

class a{
    protected :
        int x = 20;

    public :
        void display(int a){
            std::cout << a << std::endl;
        }
};

class b{
    protected :
        int x = 30;

    public :
        void display(int b){
            std::cout << b << std::endl;
        }
};

class c: public a, public b{
    public :
        void displaying(){
            a::display( a::x );
            b::display( b::x );
        }
};

int main(){
    class c(c1);
    c1.displaying();

return 0;
}