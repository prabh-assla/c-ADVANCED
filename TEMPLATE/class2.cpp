#include <iostream>

void display(int x){
    std::cout << "INSIDE FN" << x << std::endl;
}

template <class T> void display(T x){
    std::cout << "INSIDE TEMPLATE" << x << std::endl;
}

template <class T1, class T2> void display(T1 x, T2 y){
    std::cout << "'_'" << x << y << std::endl;
}

int main(){
    display(7, 3.5);
    display(4);
    display(3.5); //this will call NO IMPLICIT CONVERSION and won't call 1st fn
return 0;
}