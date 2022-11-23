#include <iostream>

class DB{
    private:
        int feet;
        float inches;

    public:
        DB(int feet=0, float inches=0) : feet{feet}, inches{inches} {}

        int feetVal(){
            return feet;
        }

        float inchesVal(){
            return inches;
        }
};

class DM{
    private:
        int m = 0;
        float cm = 0;

    public:
        DM(int m=0, float cm=0) : m{m}, cm{cm} {}

        DM(DB& val){
            float totalCMS = val.feetVal() * 12 + val.inchesVal();

            this->m = ((int)totalCMS)/100;
            this->cm = totalCMS - (this->m)*100;
        }

        void display() const{
            std::cout << m << " " << cm << std::endl;
        }
};

int main(){
    DB db(4, 78.9);
    DM dm = db;

    (dm = db).display();

    // int x;
    // int y;
    // x = (y=5) + 3;
    // std::cout << x << y << std::endl; --> it is valid C++ code...

return 0;
}