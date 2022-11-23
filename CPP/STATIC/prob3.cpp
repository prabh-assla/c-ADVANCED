#include<iostream>
using namespace std;
  
class Test
{
private:
  int x;
  int y;
public:
  Test(int x = 0, int y = 0) { this->x = x; this->y = y; }
  void setX(int a) { x = a; }
  void setY(int b) { y = b; }
  void print() { cout << "x = " << x << " y = " << y << endl; }
};
  
int main()
{
  Test *obj = new Test(0, 0);
  obj->print();
  delete obj;
  //if the object is constructed using memory from heap then we can delete it using delete operator

  return 0;
}