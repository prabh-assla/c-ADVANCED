#include <iostream>

class FLOWERS{
    private :
        int numberOfFlowers;

    public :
        FLOWERS(int x) : numberOfFlowers{x} {}

        FLOWERS* operator-> (){
            std::cout << "I hate flowers!!!" << std::endl;

            return this;
        }

        void display(){
            std::cout << "flowers are so ugly!!!" << std::endl;
        }
};

int main(){
    FLOWERS f(69);
    f->display();
    f.display();

return 0;
}