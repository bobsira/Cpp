#include <iostream>
using namespace std;
class A {
public:
  void disp() {
    std::cout << "Super Class Function" << '\n';
  }
};

class B: public A{
public:
  void disp() {
    std::cout << "Sub Class Function" << '\n';
  }
};

int main(int argc, char const *argv[]) {
  A obj;
  obj.disp();
  B obj2;
  obj2.disp();
  return 0;
}
