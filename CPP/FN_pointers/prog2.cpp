#include <iostream>
#include <vector>

typedef std::vector <int> vectorint;

void print(int value){
    std::cout << value << std::endl;
}

void forEach(vectorint values, void(*_print)(int)){

    for(auto i=0; i<sizeof(values)/sizeof(values[0])-1; ++i)
        _print(values[i]);

}

int main(){

    vectorint values = {1, 5, 9, 2, 1, 8, 12};
    forEach(values, print);

return 0;
}