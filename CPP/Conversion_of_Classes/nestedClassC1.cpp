#include <iostream>

class abc{
    int x;

    public :
        abc(int x = 0) : x{x} {}

        class def{
            int y;

            public :
                def(int y = 0) : y{y} {}
        };

    inline const void display(){
        std::cout << "ABC --> " << x << std::endl;
        def a; //private member of the subClass is inaccessible to the superClass
        
        std::cout << "ABC --> " << a.y << std::endl;
    }

};

int main(){
    abc a;
    a.display();

    return 0;
}