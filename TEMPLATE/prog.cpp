#include <iostream>

template <class T>
T max(T a, T b){ //T b = int {default data-type}
    return a>b ? a : b;
}

int main(){
    std::cout << max<int>(2, 3);

    int i=3, j = 8;
    std::cout << max(i, j);

return 0;
}