#include <iostream>

int main(){

    try{

        try{
            throw 3;
        }

        catch(int a){
            std::cout << a << std::endl;
            throw 4.5;
        }
        catch(double b){
            std::cout << b << std::endl;
            throw 4.5;
        }
    }

    catch(int a){
        std::cout << a << std::endl;
    }
    catch(double b){
        std::cout << b << std::endl;
    }

return 0;

}