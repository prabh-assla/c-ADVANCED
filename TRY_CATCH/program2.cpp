#include <iostream>

class sample{
    public :
    sample(){
        std::cout << "constructor" << std::endl;
        throw 1;
    }
    ~sample(){
        std::cout << "destructor" << std::endl;
    }
};

void __FUNC(){
    sample();
}

int main(){
    try{
    __FUNC();
    }
    catch(int i){
        std::cout << i << std::endl;
    } //no destructor call

    return 0;
}