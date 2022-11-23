#include <iostream>

class animals{
    private :
        std::string hairs;
        std::string beaks;


    public :
    animals(std::string a = "sticky", std::string b = "pointed") : hairs{a}, beaks{b} {} 

    animals(const animals& a){
        std::cout << "temporary object has been created!!!" << std::endl; 

        this->hairs = a.hairs;
        this->beaks = a.beaks;
    }

    ~animals(){
        std::cout << "destructor has been called!!!" << std::endl;
    }

};

void temporaryObjectMaker(animals a){
    std::cin.get();
}

int main(){

    animals a;
    temporaryObjectMaker(a);

return 0;
}