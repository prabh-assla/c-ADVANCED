#include <iostream>

int* ptr = nullptr;

class sample{
    public :
    sample(){
        std::cout << "constructor" << std::endl;
        ptr = new int[3]; //memory has been alloted dynamically to a pointer
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
        delete ptr; //very important to free that ALLOCATED MEMORY in catch block to avoid "MEMORY LEAK"...
        std::cout << i << std::endl;
    }

    return 0;
}