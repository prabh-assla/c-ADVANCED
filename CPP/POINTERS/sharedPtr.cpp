#include <iostream>
#include <memory>
using namespace std;

class display{
    public:
    display(){
        cout << "hello world!" << endl;
    }

    ~display(){
        cout << "bye world!" << endl;
    }

    void displayingMessage(){
        cout << "life is a big lier!!!" << endl;
    }
};

int main(){
    {
        shared_ptr<display> d;
        {
            shared_ptr<display> s = make_shared<display>();
            //s pointer has been declared and defined
            d = s;
            //s is copied in d

        }

            //s destroyed so reference count = 1
    }
            //d destroyed so reference count = 0

    return 0;
}