#include <iostream>

class Shape{
    protected :
        int l;
        int b;
        int h;

    public :
        Shape(): l{0},b{0},h{0} {}
        Shape(int l, int b, int h) : l{l},b{b},h{h} {
            std::cout << "SHAPE CONSTRUCTOR" << std::endl;
        }
        int getVolume(){
            std::cout << "INSIDE BASE" << std::endl;
            return l*b*h;
        }
};

class Square: public Shape{
    public :
        Square(): Shape() {}
        Square(int a): Shape(a, a, a) {
            std::cout << "SQUARE CONSTRUCTOR" << std::endl;
        }
        int getVolume(){
            std::cout << "INSIDE SQUARE" << std::endl;
            return l*b*h;
        }
};

class Rectangle: public Shape{
    public :
        Rectangle(): Shape() {}
        Rectangle(int a, int b, int c): Shape(a, b, c) {
            std::cout << "RECTANGLE CONSTRUCTOR" << std::endl;
        }
        int getVolume(){
            std::cout << "INSIDE RECTANGLE" << std::endl;
            return l*b*h;
        }
};
// Ideally, it should have called the respective get_Volume() functions of the child classes but Instead, it calls the get_Volume() defined in the base class.
// This happens due to static linkage which means the call to get_Volume() is getting set only once by the compiler which is in the base class.
int main(){
    Shape* sq; Square SQ(2); Rectangle REC(2, 3, 4);
    sq = &SQ;
    sq->getVolume();
    sq = &REC;
    sq->getVolume();

return 0;
}