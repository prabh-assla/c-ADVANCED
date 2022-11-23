#include <iostream>

class numbers{
    private :
    int a;
    int b;

    public :

    numbers() : a{0}, b{0} {}

    numbers(int x, int y) : a{x}, b{y} {}

    numbers(const numbers &num) : a{num.a}, b{num.b} {
        std::cout << "user defined constructor has been called!" << std::endl;
    }

    void display() const{
        std::cout << a << ' ' << b << std::endl;
    }
};

int main(){
    numbers num(3, 4);
    num.display();
    
    numbers numsies(num);
    numsies.display();

return 0;
}