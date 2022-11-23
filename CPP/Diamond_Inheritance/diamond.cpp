#include <iostream>

class human{
    public :
    void display() const{
        std::cout << "human has been called" << std::endl;
    }
};

class engineer : public human {};

class dad : public human {};

class Rajesh : public engineer, public dad{

};

int main(){
    Rajesh r;

    r.engineer::display();
    r.dad::display();

return 0;
}