#include <iostream>

class hostel{
    private:
        int mess;

    protected:
        int students;

    public:
        hostel(int students=0, int mess=0) : students{students}, mess{mess} {}

        void display() const;

        int studentVal(){
            return students;
        }
};

void hostel::display() const{
    std::cout << students << " " << mess << std::endl;
};

class juniorsHostel : public hostel{
    public:

    juniorsHostel(hostel& h){
        students = h.studentVal();
    }

    void display() const{
        std::cout << "hello moto" << std::endl;
    }
};

int main(){
    hostel h1(6, 7);

    h1.display();

    juniorsHostel h2(h1);

    h2.display();

return 0;
}