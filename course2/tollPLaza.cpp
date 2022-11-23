#include <iostream>

class infoCars{
    private :
    static int numberOfCars;
    static int amountPaid;
    bool hasBeenAmountPaid;

    public :
    infoCars(bool hasBeenAmountPaid) : hasBeenAmountPaid{hasBeenAmountPaid}{
        ++numberOfCars;

        if(hasBeenAmountPaid)
            amountPaid+=250;
    }

    const static void display(){
        std::cout << "number of Cars : " << numberOfCars << std::endl;
        std::cout << "total amount made : " << amountPaid << std::endl;
    }; 
};

int infoCars::numberOfCars = 0;
int infoCars::amountPaid = 0;

int main(){

    class infoCars c1(true), c2(false), c3(true), c4(true);

    infoCars::display();

return 0;
}
