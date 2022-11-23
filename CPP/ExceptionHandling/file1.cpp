#include <iostream>
#include <string.h>

void sendThrow2(void){
    throw "hello moto";
}

void sendThrow3(void){
    throw "hello samsung";
}

int main(){
    int i;

    std::cin >> i;

    try{
        if(i == 2)
            sendThrow2();

        if(i == 3)
            sendThrow3();
    }
    catch(char const* exception){
        if(!strcmp(exception, "hello moto")){
            std::cout << "motorola mobiles are good!!!" << std::endl;
        }

        if(!strcmp(exception, "hello samsung")){
            std::cout << "samsung mobiles are good!!!" << std::endl;
        }
    }

    catch(...){
        std::cout << "default exception" << std::endl;
        // in case other catches fail this will always be available... thus serves as good life-saviour
    }

    return 0;
}