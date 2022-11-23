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

        class fed{
            int z;

            public :
                fed(int z = 0) : z{z} {}

                inline const void display(){
                    def a;
                    std::cout << "DEF --> " << a.y << std::endl; // y --> inaccessible
                }
                
        };


};

int main(){
    abc::fed a;
    a.display();

    return 0;
}