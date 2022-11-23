#include <iostream>

template <class T1, class T2>

class SAMPLE{
    T1 a;
    T2 b;

    public :
        SAMPLE(T1 x, T2 y){
            a = x;
            b = y;
        }

    void display(){
        std:: cout << a << " " << b << std::endl;
    }
};

int main(){
    SAMPLE(2, 3).display();

    int i = 3.3; double j = 8.98;
    SAMPLE(i, j).display();

    SAMPLE <float, int> s1(3.3, 3);
    s1.display();
    return 0;
}