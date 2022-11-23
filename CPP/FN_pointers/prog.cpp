#include <iostream>
#include <bits/stdc++.h>

int add(int x, int y){
    return x+y;
}

int mulitiply(int x, int y){
    return x*y;
}

void display(std::string x){
    std::cout << "the final output is : " << x << std::endl;
}

int main(){

    int (*ptr)(int, int) = &add;
    int (*ptr1)(int, int) = &mulitiply;
    display(std::to_string( (*ptr1) ( (*ptr)(-2, 4), (*ptr)(5, 4) ) ) );

return 0;
}