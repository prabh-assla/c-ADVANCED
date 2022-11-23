#include <iostream>

class Stack{
    private:
    int* ptr = NULL;
    int size = 0;

    public:
    Stack(int a = 0){
        ++size;
            ptr = (int*) calloc(size, sizeof(int));
        
        if(ptr)
            ptr[size - 1] = a;

    }

    int* push(int a){
        ++size;
            ptr = (int*) realloc(ptr, size*sizeof(int));
        
        if(ptr)
            ptr[size - 1] = a;

    return ptr;
    }

    int* pop(){
        --size;

        if(size)
            ptr = (int*) realloc(ptr, size*sizeof(int));

    return ptr;
    }

    void display() const{

        std::cout << "Stack Size : " << size << std::endl << " [ ";

        for(int i=0; i<size; ++i)
            std::cout << ptr[i] << " ";

        std::cout << "]" << std::endl;

    }
};

int main(){
    Stack s1(2);

    s1.push(3);
    s1.push(6);
    s1.push(8);
    s1.push(109);

    s1.pop();
    s1.display();

return 0;
}
