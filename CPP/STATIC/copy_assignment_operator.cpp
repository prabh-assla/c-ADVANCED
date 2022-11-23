#include <iostream>
#include <string.h>

class fruits{
    private:
    float price;
    int baskets;

    public:
    fruits(float x=0.0, int y=1) : price{x}, baskets{y} {}

    fruits operator= (const fruits& f){
        price = f.price;
        baskets = f.baskets;

        std::cout << "user-defined copy assignment operator has been called" << std::endl;
    }

    void display(){
        std::cout << "Rs." << price << " " << baskets << std::endl;
    }
    
};

int main(){
    fruits f1(1.4, 3), f2;
    f2 = f1;

    f2.display();

return 0;
}