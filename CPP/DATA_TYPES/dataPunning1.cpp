#include <iostream>

void display_(){
    int a = 12;
    double value = *(double*)&a;

    std::cout << value << std::endl;

    value = 8.9;

    std::cout << value << std::endl;
}

void display__(){
    //this function will crash as in this function we will be writing a value of 8 bytes(double) to a container that has a value of 4 bytes(int)

    int a = 12;
    double& value = *(double*)&a;
    value = 0.0;

    std::cout << value << std::endl;
}

int main(){
    display_();
    display__();

return 0;
}