#include <iostream>

struct numbers{
    int a = 0;
    int b = 0;
};

std::ostream& operator<< (std::ostream& COUT, numbers& num){
    COUT << "first variable : " << num.a << std::endl;
    COUT << "second variable : " << num.b << std::endl;
return COUT;
}

int main(){
    numbers n[3];
    n[0].a = 12;
    n[0].b = 24;

    n[1].a = 36;
    n[1].b = 48;

    n[2].a = 60;
    n[2].b = 72;

    std::cout << n[0] << n[1] << n[2];

return 0;
}