#include <iostream>
#include <string.h>

class string_implementation{
    private :
        char* ptr;

        //objects of class are in stack, their pointers are also in the stack... however the memory that these pointers point to is taken dynamically from heap

    public :
        string_implementation(){
            ptr = new char[1];
            ptr[0] = '\0';
        }

        string_implementation(const char* s){
            ptr = new char[ strlen(s)+1 ]; 

            strcpy(ptr, s);

            ptr[strlen(s)] = '\0';
        }

        string_implementation(const char* &s){
            ptr = new char[ strlen(s)+1 ]; 

            strcpy(ptr, s);

            ptr[strlen(s)] = '\0';   
        }

        string_implementation (const string_implementation& _string){
            ptr = new char[ strlen(_string.ptr) + 1 ];

            strcpy(ptr, _string.ptr);

            ptr[ strlen(_string.ptr) ] = '\0';
        }

        string_implementation operator+ (string_implementation& _string){
            string_implementation _s;

            _s.ptr = new char[ strlen(_string.ptr) + strlen(ptr) + 1 ];

            strcat(_s.ptr, ptr);
            strcat(_s.ptr, _string.ptr);

            _s.ptr[ strlen(_string.ptr) + strlen(ptr)] = '\0';

            return _s;
        }

        void display(){
            std::cout << ptr << std::endl;
        }

        ~string_implementation(){
            std::cout << ptr  << std::endl;
            delete[] ptr;
        }

};

int main(){
    string_implementation s1("you will be a good dolling clown!!!");
    s1.display();

    string_implementation s2 = s1;
    s2.display();

    string_implementation s3 = s2 + s1;
    s3.display();

return 0;
}