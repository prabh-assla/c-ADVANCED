#include <iostream>
//basically to pass size parameter of array

template <class T, int a>
void SAMPLE(T x){
    std::cout << x << a;
}

int main(){
    SAMPLE<int, 10>(2);
    return 0;
}