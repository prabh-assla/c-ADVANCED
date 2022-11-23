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
        int virtual getVolume(){
            std::cout << "INSIDE BASE" << std::endl;
            return l*b*h;
        }
        virtual ~Shape(){
            std::cout << "_shape_destructor" << std::endl;
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
        virtual ~Square(){
            std::cout << "_square_destructor" << std::endl;
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
        virtual ~Rectangle(){
            std::cout << "_rectangle_destructor" << std::endl; 
        }
};

int main(){
    Shape* sq; Square SQ(2); Rectangle REC(2, 3, 4);
    sq = &SQ;
    sq->getVolume();
    sq = &REC;
    sq->getVolume();

return 0;
}

// ==> we are using virtual destructors to avoid memory leak