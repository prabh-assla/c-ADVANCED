#include <iostream>
#include <math.h>

template <typename a, typename b>
auto multiply(a a1, b b1) -> decltype(a1*(b1 - floor(b1))){
    return a1*(b1 - floor(b1));
}

//trailing return type syntax

int main(){
    std::cout << multiply(2, 3.5) << std::endl;
    std::cout << multiply(3.5, 2) << std::endl;

    return 0;
}