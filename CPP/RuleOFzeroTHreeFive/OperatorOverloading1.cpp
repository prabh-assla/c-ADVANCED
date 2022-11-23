#include <iostream>
#include <list>

class animals{
private :
    std::string names;
    std::string behaviour;
    std::list <std::string> container;

public :
    animals(std::string a, std::string b) : names{a}, behaviour{b} {
        container.push_back(names);
        container.push_back(behaviour);
    }

    animals& operator+= (animals& characteristics){
        container.push_back(characteristics.names);
        container.push_back(characteristics.behaviour);
    }

    void display() const{
        for(auto i=container.begin(); i!=container.end(); ++i){
            std::cout << *i << std::endl;
        }
    }

};

int main(){
    animals a("parrot", "green-fur red-beak human-mimicry");
    animals b("crow", "black-feathers irritating-voice ugly-appearance");
    animals c("duck", "white-fur billed-beak");

    a += b;
    a += c;

    a.display();

    return 0;
}