#include <iostream>
#include <fstream>

int main(){
    std::fstream fptr;
    fptr.open("./data.txt", std::ios::in | std::ios::app);

    fptr.seekg(3, std::ios_base::beg);

    char buffer[3];
    fptr.read(buffer, 2);

    std::cout << buffer << std::endl;

    return 0;
}