#include <iostream>

void referenceToPointer(){
    int a = 10, d = 190;
    int *b = &a;
    int* &c = b;

    std::cout << *b << ' ' << *c << std::endl;

    b = &d;

    std::cout << *b << ' ' << *c << std::endl;
}

int main(){
    referenceToPointer();

return 0; 
}