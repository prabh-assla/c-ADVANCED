#include <iostream>

class person{
    private :
        std::string name;
        int code;

    public :
        person(): name{"\0"}, code{0} {}
        person(std::string name, int code): name{name}, code{code} {}

        virtual int incrementStatus() = 0;
        virtual void display() = 0;
};

class doctor: public person{
    private :
        int experience;

    public :
        doctor() : person(), experience{0} {}
        doctor(std::string name, int code) : person(name, code), experience{0} {}

        int incrementStatus(){
                return experience+=1;
        }

        void display(){
            std::cout << experience << std::endl;
        }
};

class pilot: public person{
    private :
        int experience;

    public :
        pilot() : person(), experience{0} {}
        pilot(std::string name, int code) : person(name, code), experience{0} {} 

        int incrementStatus(){
                return experience+=3;
        }

        void display(){
            std::cout << experience << std::endl;
        }
};

int main(){
    person* a[3];
        a[0] = new doctor();
        a[0]->incrementStatus();
        a[0]->display();

        a[1] = new pilot();
        a[1]->incrementStatus();
        a[1]->display();

        a[2] = new doctor();
        a[2]->incrementStatus();
        a[2]->display();
    return 0;
}