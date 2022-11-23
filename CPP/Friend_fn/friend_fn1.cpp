//friend fn can be declared in any section of the class -- private, public or protected...

#include <iostream>

class def;

class abc{
    int a = 67;

    public :
        void displayDEF(def &a); //here displayDEF is a function
};

class def{
    int b = 99;

    public :
        friend void abc::displayDEF(def &a); //here we converted this fn into friend fn
};

    void abc::displayDEF(def &a){
        std::cout << "a.b => " << a.b << std::endl;
    }

int main(){
    abc a;
    def b;
    a.displayDEF(b);

    return 0;
}

// The Friend functions are not a member of the class and hence they do not have ‘this’ pointer.