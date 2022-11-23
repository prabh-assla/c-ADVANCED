#include <iostream>
#include <iomanip>
using namespace std;

ostream& _cout(ostream& _COUT){
    _COUT.setf(ios::showpos);
    _COUT.setf(ios::showpoint);
    _COUT.fill('|');
    _COUT.precision(2);
    _COUT << left << setiosflags(ios::fixed) << setw(14);
return _COUT;
}

int main(){
    std::cout << "Rs. " << _cout << 937.993 << std::endl;
return 0;
}