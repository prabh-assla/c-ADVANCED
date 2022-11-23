#include <iostream>

class DM{
    private:
        int m = 0;
        float cm = 0;

    public:        

        DM(int m=0, float cm=0) : m{m}, cm{cm} {}

        void display() const{
            std::cout << m << " " << cm << std::endl;
        }
};

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

        inline operator DM(){
            float totalCMS = feet * 12 + inches;

            int m = ((int)totalCMS)/100;
            float cm = totalCMS - m*100;
        
        return {m, cm};
        }

        void display() const{
            std::cout << feet << " " << inches << std::endl;
        }
};

int main(){
    DB db(46, 78.9);
    DM db1 = db;

    db1.display();

return 0;
}