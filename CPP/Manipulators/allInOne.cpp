#include <iostream>
#include <iomanip>

int main(){

    std::cout << std::setw(40) << std::setfill('~') << "world" << std::endl;
    std::cout << std::setw(40) << std::left << "world" << std::endl;
    std::cout << std::setprecision(5) << 9.828928982138721387123879 << std::endl;
    std::cout << std::oct << 4998299 << std::endl;
    std::cout << std::dec << 4998299 << std::endl;
    std::cout << std::hex << 4998299 << std::endl;
    std::cout << std::hex << std::setiosflags(std::ios_base::showbase | std::ios_base::uppercase) << 873216732176723187 << std::endl;
    std::cout << std::setbase(16) << 1000000000000000 << std::endl;

return 0;
}