#include <iostream>

class base{
    virtual void function(){

    }
};

class derived: public base {
};

int main(){
    base *b = new derived;
    derived *d = dynamic_cast<derived*>(b); // removing virtual fn from base will throw an error at b

    if(d)
        std::cout << "trustworthy" << std::endl;
    else
        std::cout << "and still hate myself!" << std::endl;

return 0;
}