#include <iostream>

int& returnVal(){
    static int j = 0;
    return j;
}

int main(){
    int i = returnVal();
    returnVal() = 5;
    std::cout << returnVal() << std::endl;

return 0;
}