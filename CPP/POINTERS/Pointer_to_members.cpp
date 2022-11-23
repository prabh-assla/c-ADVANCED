// #include <iostream>

// class bffs{
//     private :
//     const char* names;

//     public :
//     int position;

//     void display(){
//         std::cout << " " << position << std::endl;
//     }
// };
    
//     int bffs::*ptr = &bffs::position;
//     void (bffs::*ptr1) (int) = &bffs::display();

// int main(){  
//     void (bffs::* ptfptr) (int) = &bffs::display;
//     bffs b;
//     b.*ptr = 10;

//     b.display();

// return 0;
// }

#include <iostream>
using namespace std;

class X {
public:
  int a;
  void f(int b) {
    cout << "The value of b is "<< b << endl;
  }
};

int main() {

  // declare pointer to data member
  int X::*ptiptr = &X::a;

  // declare a pointer to member function
  void (X::* ptfptr) (int) = &X::f;

  // create an object of class type X
  X xobject;

  // initialize data member
  xobject.*ptiptr = 10;

  cout << "The value of a is " << xobject.*ptiptr << endl;

  // call member function
  (xobject.*ptfptr) (20);
}