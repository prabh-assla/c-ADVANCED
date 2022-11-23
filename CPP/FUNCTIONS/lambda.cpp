#include <bits/stdc++.h>

// Lambda with empty capture clause [] can access only those variables which are local to it. 

void printVector(std::vector<int> v){
    for_each(v.begin(), v.end(), [](int i){std::cout << i << std::endl;});
    std::cout << std::endl;
}

void printVector_(std::vector<int> v){
    int a=2, b=3;
    for_each(v.begin(), v.end(), [=](int i){ //remove '=' by '&'; you will get right answer...
        std::cout << i << std::endl;
        a=6; b=9;
        std::cout << a << " _ " << b << std::endl;});
    std::cout << std::endl;
}

void printVector__(std::vector<int> v){
    int a=2, b=3;
    for_each(v.begin(), v.end(), [&](int i){
        std::cout << i << std::endl;
        a=6; b=9;
        std::cout << a << " _ " << b << std::endl;});
    std::cout << std::endl;
}

int main(){
    std::vector <int> v{1, 2, 3, 4, 5};

    printVector(v);
    printVector_(v);
    printVector__(v);

return 0;
}