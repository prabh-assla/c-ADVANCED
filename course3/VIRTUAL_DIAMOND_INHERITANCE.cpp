#include <iostream>

class Person{
    protected:
        std::string name;
        long long int code;
    
    public:
        Person(): name{"xyz"}, code{12345678} {
            std::cout << "default has been called" << std::endl;
        }

        Person(std::string name, long long int code): name{name}, code{code} {
            std::cout << "parameterized has been called" << std::endl;
        }
};

class Account: virtual public Person{
    protected:
        double pay;

    public:
        Account(): pay(0.0), Person() {
            std::cout << "default has been called" << std::endl;
        }

        Account(std::string name, long long int code, double pay): pay{pay}, Person{name, code} {
            std::cout << "parameterized has been called" << std::endl;
        }   
};

class Admin: virtual public Person{
    protected:
        double experience;

    public:
        Admin(): experience(0.0), Person() {
            std::cout << "default has been called" << std::endl;
        }

        Admin(std::string name, long long int code, double experience): experience{experience}, Person{name, code} {
            std::cout << "parameterized has been called" << std::endl;
        }   
};

class Master: public Account, public Admin{
    public:
        Master(): Account(), Admin() {}
        Master(std::string name, long long int code, double pay, double experience): Account(name, code, pay), Admin(name, code, experience) {}
};