#include <iostream>

template <typename T>
class initializer
{
    T *ptr;
    int size;

public:
    initializer(T array[], int size);
    void print();
};

template <typename T> //everytime you gotta keep on writing this... THAT IS WHY IT IS BETTER TO DEFINE FUNCTIONS WITHIN THE CLASS (here class "initializer")
initializer<T>::initializer(T array[], int size){
    this->ptr = new T[size];
    this->size = size;

    for(int i=0; i<size; ++i)
        ptr[i] = array[i];
}

template <typename T>
void initializer<T>::print(){
    for(int i=0; i<this->size; ++i)
        std::cout << *(ptr+i);

    std::cout << std::endl;
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    initializer<int> a(arr, 5);
    a.print();
return 0;
}