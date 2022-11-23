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
    unique_ptr<display> d = make_unique<display>();
    d->displayingMessage();
    return 0;
}