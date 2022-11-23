#include <iostream>
#include <iomanip>

int main(){
    std::cout << std::left << std::setw(8) << std::setfill('0') << 9.2 << std::endl; 
    std::cout << std::right << std::setw(8) << std::setfill('0') << 9.2 << std::endl; 

return 0;
}