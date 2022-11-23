#include <iostream>
#include <string>

//static_casts are done at compile time

class conversions{
    private:
        float a;

    public:
        conversions(float i=1.2){
            a = i;
        }

        operator std::string(){
            return std::to_string(a);
        }

        operator int(){
            return static_cast<int>(a);
        }

        float decimal(){
            return a;
        }
};

int main(){
    conversions obj(9.83);

    std::string toString = static_cast<std::string>(obj);
    std::cout << typeid(toString).name() << std::endl;

    std::cout << typeid(static_cast<int>(obj)).name() << std::endl;    

return 0;
}