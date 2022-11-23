#include <iostream>
#include <fstream>

int main(){
    // a file can't be opened in both modes at the same time... using ofstream and ifstream HA HA HA ;)

    std::ofstream ptr;
    ptr.open("./data.txt", std::ios::app);

    ptr << "hello world!!! _________________" << std::endl;

    std::ifstream ptr1;
    ptr1.open("./data.txt");
    std::string line = "";

    while(ptr1){
        getline(ptr1, line);
        std::cout << line << std::endl;
    }

    ptr1.close();
    ptr.close();
return 0;
}