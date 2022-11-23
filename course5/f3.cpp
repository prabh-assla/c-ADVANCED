#include <iostream>
using namespace std;

int main(){
    int ** p = new int *[2];

    for(int i=0; i<8; ++i){
        p[i] = new int[2];
            for(int j=0; j<2; ++j){
                p[i][j] = 9;
            }
    }

    for(int i=0; i<2*2; ++i){
        std::cout << i << std::endl;
    }

    delete p;

return 0;
}