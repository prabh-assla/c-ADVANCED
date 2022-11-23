#include <iostream>

struct numbers{
    int a, b;
};

int main(){
    numbers e = {1, 2};
    std::cout << e.a << e.b << std::endl;

    int* position = (int*)&e;
    std::cout << position[0] << ',' << position[1] << std::endl;

    return 0;
}