#include <bits/stdc++.h>
#include <iostream>

void a(){
    std::cout << "we are who we are" << std::endl;
}

int main(){
    atexit(a);
    std::cout << "hello world" << std::endl;

    exit(9999);
}