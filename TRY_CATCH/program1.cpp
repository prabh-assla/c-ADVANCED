#include <iostream>

class sample{
    public :
    sample(){
        std::cout << "constructor" << std::endl;
    }
    ~sample(){
        std::cout << "destructor" << std::endl;
    }
};

void __FUNC(){
    sample();
    throw 1;
}

int main(){
    try{
    __FUNC();
    }
    catch(int i){
        std::cout << i << std::endl;
    } //destructor call

    return 0;
}