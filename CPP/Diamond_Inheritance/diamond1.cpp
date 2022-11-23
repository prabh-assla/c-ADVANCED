#include <iostream>

class human{
    public :
    void display() const{
        std::cout << "human has been called" << std::endl;
    }
};

class engineer : virtual public human {};

class dad : virtual public human {};

class Rajesh : public engineer, public dad{

};

int main(){
    Rajesh r;

    r.display();
    r.display();

return 0;
}