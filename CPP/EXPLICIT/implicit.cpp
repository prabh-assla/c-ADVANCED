#include <iostream>

class TEACHER{
public :
    TEACHER(int a){
        std::cout << a << std::endl;
    }

    TEACHER(std::string b){
        std::cout << b << std::endl;
    }
};

int main(){
    TEACHER hello = (std::string)"hi!";

return 0;
}