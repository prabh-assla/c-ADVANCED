#include <iostream>

class fruits{
    private :
        int baskets;
        int picnic_locations;

    public :
    fruits(int a, int b) : baskets{a}, picnic_locations{b} {} 

    void thisFnHasAccessToWholeObject(fruits*);

    void send(){
        return thisFnHasAccessToWholeObject(this);
    }

    void display(){
        std::cout << baskets << " " << picnic_locations << std::endl;
    }
};

void fruits::thisFnHasAccessToWholeObject(fruits* a){
    std::cout << "i have power to extract whole object" << std::endl;
    a->display();
};

int main(){
    fruits a(21, 6);
    a.send(); 
return 0;
}