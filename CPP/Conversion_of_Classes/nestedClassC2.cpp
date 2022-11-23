#include <iostream>

class abc{
    int x;

    public :
        abc(int x = 0) : x{x} {}

        class def{
            int y;

            public :
                def(int y = 0) : y{y} {}

            inline const void display(){
                std::cout << "DEF --> " << y << std::endl;
                abc a; //private member of the superClass is accessible to the nested class

                std::cout << "DEF --> " << a.x << std::endl;
            }
        };

};

int main(){
    abc::def a;
    a.display();

    return 0;
}