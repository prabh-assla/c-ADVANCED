#include <iostream>

class fractionSum{

    private:
    int n1;
    int n2;
    int d1;
    int d2;

    public:
    fractionSum(){
        n1 = 0;
        n2 = 0;
        d1 = 0;
        d2 = 0;
    }

    fractionSum(int n1, int n2, int d1, int d2) : n1{n1}, n2{n2}, d1{d1}, d2{d2} {}

    int lcm(int a, int b) const{
        int max = a, min = b, lcm, index = 0;

        if(b > a){
            max = b;
            min = a;
        }

        do{
            ++index;
            lcm = max*index;
        }while((max*index)%min && index<min);

        return lcm;
    }

    void display() const{
        lcm(d1, d2);
        std::cout << (n1*(lcm(d1, d2)/d1) + n2*(lcm(d1, d2)/d2)) << "/" << lcm(d1, d2) << std::endl;
    }  
};

int main(){
    int n1, n2, d1, d2;
    std::cout << "n1 & d1 : " << std::endl;
    std::cin >> n1 >> d1;

    std::cout << "n2 & d2 : " << std::endl;
    std::cin >> n2 >> d2;

    fractionSum FS(n1, n2, d1, d2);
    FS.display();

return 0;
}