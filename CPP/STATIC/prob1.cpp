#include<iostream>
using namespace std;
  
class Test
{
private:
  int x;
public:
  Test(int x = 0) { this->x = x; }
  void change(Test *t) { t = this; } //this = t ----------> invalid
  void print() { cout << "x = " << x << endl; }
};
  
int main()
{
  Test obj(5);
  Test *ptr = new Test (10);

  obj.change(ptr);
  obj.print();

  ptr->print();

  return 0;
}