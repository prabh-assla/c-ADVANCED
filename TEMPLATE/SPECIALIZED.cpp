#include <iostream>

template <typename T> void add(T i, T j){
    std::cout << i+j << std::endl;
}

template <> void add(int i, int j){
    std::cout << "inside a specialized function ";
    std::cout << i+j << std::endl;
}

int main(){
    add(6, 7);
    // add(5.4, 4); explicitely you need to mention in which type you have to convert... BECAUSE FOR THE CASES OF TEMPLATES IMPLICIT CONVERSIONS ARE NEVER POSSIBLE ---> ERROR
    add<float>(3.4, 5); // NO ERROR 
    add<int>(3, 5.1); //NO ERROR -----> here we are going inside specialized function

    return 0;
}