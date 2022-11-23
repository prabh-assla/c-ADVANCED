#include <iostream>

    class abc{
        int var;
        friend abc operator+ (int, abc&);

        public :
            abc(int var = 9) : var{var} {}

            int returnVar(){
                return var;
            }

            abc(const abc& j) : var{ j.var } {}

            void display(){
                std::cout << var << std::endl;
            }
    };

    abc operator+ (int i, abc& j){
        i = i * j.returnVar();
        return {i};
    }

int main(){
    abc a(7), b;
    (b = 40 + a).display();

    return 0;
}