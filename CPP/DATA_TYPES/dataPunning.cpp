#include <iostream>

void display(){
    int a = 3;
    std::cout << a << ' ' << sizeof(a) << std::endl;

    double b = a; //explicit type conversion
    std::cout << b << ' ' << sizeof(b) << std::endl;
}

void display_(){
    int a = 3;
    std::cout << a << ' ' << sizeof(a) << std::endl;

    double b = (double)a; //implicit type conversion
    std::cout << b << ' ' << sizeof(b) << std::endl;
}

int main(){

    display();
    display_();
    return 0;
}