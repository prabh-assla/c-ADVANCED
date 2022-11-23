#include <iostream>
#include <fstream>

int main(){
    std::fstream fptr;
    fptr.open("./data.txt", std::ios::in | std::ios::binary);

    fptr.seekg(35, std::ios_base::beg);

    char buffer[3];
    buffer[0] = '1';
    buffer[1] = '2';
    buffer[2] = '3';

    fptr.read(buffer, 1);

    std::cout << buffer << std::endl;

    return 0;
}