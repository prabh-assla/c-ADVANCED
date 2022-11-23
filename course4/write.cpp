#include <iostream>
#include <fstream>

int main(){
    char name[9];
    std::cin.read(name, 6);

    std::cout << name << std::endl;

    std::cout.write(name, 3);

return 0;
}