#include <iostream>

int sum(int x, int y){
    return x+y;
}

int main(){
    typedef int(*SUM)(int, int);

    SUM p1 = &sum;
    printf("%d\n", p1(2, 3));
    return 0;
}