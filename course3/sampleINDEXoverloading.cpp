#include <iostream>

class sample{
    private:
        int* ptr;
        int size;

    public:

    sample(int _size = 1) : size{_size} {
        std::cout << "febhbhejbkejk" << std::endl;
        ptr = new int[size];
    }

    void operator[] (int& index) {
        std::cout << "febhbhejbkejk" << std::endl;
        if(index < size)
            std::cout << ptr[index] << std::endl;

        else
            std::cout << "out of range" << std::endl;
    }
};

int main(){

    sample a(8);
    a[0];
    // a[8];

    return 0;
}