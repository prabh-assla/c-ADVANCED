#include <iostream>
#include <string.h>

int main(){
    char name[9];
    std::cin.read(name, 6);

    std::cout << name << std::endl;

return 0;
}