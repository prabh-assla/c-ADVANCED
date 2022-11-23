#include <iostream>
// int func(int a) throw(int, double, const char*) ---> specifying exceptions has been deprecated
int func(int a){
    try{
        if(a > 2)
            throw ("hello");
        else
            throw (true);
    }
    catch(const char* str){
        std::cout << str << std::endl;
        throw;
    }
    catch(bool val){
        std::cout << ~val << std::endl;
        throw;
    }
}

int main(){
    try{
        int i = -19;
        func(i);
    }
    catch(...){
        std::cout << "__CPP__PROGRAMMING___" << std::endl;
    }
    return 0;
}