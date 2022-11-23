#include <iostream>

void display(int&& a){
    std::cout << a << std::endl;
}

int main(){
    int a = 3;
    int b = 4;

    display(a+b); 
    //we need int&& for displaying this...
    //const int& is also used...

return 0;
}