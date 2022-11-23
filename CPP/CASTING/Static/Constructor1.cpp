#include <iostream>

int main(){
    char c = 'a';
    int* ptr = static_cast<int*>(&c); 
    //compile-time error... reason being that both are incompatible pointer types -----> c++ type typecasting

    int* ptr = (int*)&c; // c type typecasting ---> allowed but still an error
    printf("%d", *ptr);

return 0;
}