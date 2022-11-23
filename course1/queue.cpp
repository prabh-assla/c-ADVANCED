#include <iostream>

class Queue{
    private:
    int* ptr = NULL;
    int size = 0;

    public:
    Queue(int a = 0){
        ++size;
            ptr = (int*) calloc(size, sizeof(int));
        
        if(ptr)
            ptr[size - 1] = a;

    }

    int* enqueue(int a){
        ++size;
            ptr = (int*) realloc(ptr, size*sizeof(int));
        
        if(ptr)
            ptr[size - 1] = a;

    return ptr;
    }

    int* dequeue(){

    if(size){
        --size;
        
        for(int i=0; i<size; ++i)
            ptr[i] = ptr[i+1];

        ptr = (int*) realloc(ptr, size*sizeof(int));
    }

    return ptr;
    }

    void display() const{

        std::cout << "Queue Size : " << size << std::endl << " [ ";

        for(int i=0; i<size; ++i)
            std::cout << ptr[i] << " ";

        std::cout << "]" << std::endl;

    }
};

int main(){
    Queue s1(2);

    s1.enqueue(3);
    s1.enqueue(6);
    s1.enqueue(8);
    s1.enqueue(109);
    s1.display();

    s1.dequeue();
    s1.dequeue();
    s1.display();

return 0;
}
