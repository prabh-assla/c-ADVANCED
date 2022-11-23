#include <iostream>

class animals{
    private :
        static int number_of_animals;
        const char* name_of_animal;

    public :
        static void display(){
            ++number_of_animals;
            std::cout << number_of_animals << std::endl;

            //you can't add name_of_animal to this display line...
        }
};

int animals::number_of_animals = 1;

int main(){

    animals a;
    animals::display();

    animals b;
    animals::display();

    animals c;
    animals::display();


return 0;
}