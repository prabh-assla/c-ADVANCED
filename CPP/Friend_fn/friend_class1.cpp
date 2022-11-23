#include <iostream>

class abc{
    private :
        int a = 12;

    public :
        friend class def;
};

class def{
    private :
        int b;

    public :
        void displayContentsOfABC(abc& z){
            std::cout << z.a << std::endl;
        }
};

int main(){
    abc z;
    def q;
    q.displayContentsOfABC(z);

return 0;
}