#include <iostream>
#include <exception>

class _main{
    virtual void display(){
    }
};
class derived1: public _main{};
class derived2: public _main{};

int main(){
    derived1 d1;

    _main* ptr = dynamic_cast <_main*> (&d1);

    try{
        derived2* ptr1 = dynamic_cast <derived1*> (ptr);
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    catch(...){
        std::cout << "don't worry the allocation is alright!!!" << std::endl;
    }

return 0;
}