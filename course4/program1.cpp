#include <iostream>
#include <fstream>

int main(){
    std::fstream PTR;
    PTR.open("./data.txt", std::ios::trunc | std::ios::out | std::ios::in);
    std::string line = "1";

    while(PTR){ //if file opened only then loop will execute...
        getline(std::cin, line);

        if(line == "0")
            break;

        PTR << line << std::endl;
    }

    PTR.seekg(0, std::ios::beg);

    while(!PTR.eof()){
        getline(PTR, line);
        std::cout << line << std::endl;
    }

    PTR.close();
    return 0;
}