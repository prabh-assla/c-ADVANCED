#include <iostream>

int sum(int a, int b){
    return a+b;
}

int subtract(int a, int b){
    return a-b;
}

int multiply(int a, int b){
    return a*b;
}

int division(int a, int b){
    return a/b;
}

void display(int result){
    printf("%d\n", result);
}

int main(){
    typedef int(*ptr[])(int, int);
    typedef void(*pt)(int);
    ptr p = {&sum, &subtract, &multiply, &division};
    pt pp = &display;

    for(int i=0; i<sizeof(p)/sizeof(p[0]); ++i){
        printf("%d ", i+1);
        pp(p[i](2, 3));
    }

return 0;
}