#include <iostream>

struct employee{
    double a;
    int b;
    char c;
};

int main(){
    employee e = {4.56, 3, 's'};
    double x = *(double*)((char*)&e);
    int y = *(int*)((char*)&e + 8);
    char z = *((char*)&e + 12);

    std::cout << x << ' ' << y << ' ' << z << std::endl;

return 0;
}