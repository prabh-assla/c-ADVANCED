#include <iostream>

class baseclass{
    public:
        void display1(){
            std::cout << "hello world!" << std::endl;
        }

        void display2(){
            std::cout << "hello moto!" << std::endl;
        }
};

class derivedclass : public baseclass{
    public:
        void display1(){
            std::cout << "hello jovians!" << std::endl;
        }

};

int main(){
    derivedclass a;
    a.display1();
    a.display2();
return 0;
}