#include <iostream>

int main(){
    char *s[] = {"hello", "world", "power"};
    char **ptr;

    //if ++*ptr then the pointer will move internally
    //if *ptr++ then the pointer will move externally

    ptr = s;

    std::cout << "1.)" << **s << std::endl;
    std::cout << "2.)" << *ptr << std::endl;
    std::cout << "3.)" << **ptr << std::endl;
    std::cout << "4.)" << ++*ptr << std::endl;
    std::cout << "5.)" << *ptr++ << std::endl;
    std::cout << "6.)" << ++*ptr << std::endl;
    std::cout << "7.)" << ++*ptr << std::endl;
    std::cout << "8.)" << *ptr++ << std::endl;
    std::cout << "9.)" << *ptr << std::endl;

return 0;
}

