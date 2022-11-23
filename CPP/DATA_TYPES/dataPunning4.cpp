#include <iostream>

struct employee{
    char name[6];
    int id;
};

int main(){
    employee e = {"prabh", 123};
    char* pointer_to_employee = (char*)&e;

    std::cout << sizeof(pointer_to_employee) << std::endl;
    std::cout << pointer_to_employee[0] << " " << pointer_to_employee[6] << std::endl;
    return 0;
}