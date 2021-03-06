// Listing 10.6 - The Counter class
#include <iostream>
class Counter {
private:
  int itsVal;

public:
  Counter ();
  ~Counter (){};
  int GetItsVal() const { return itsVal;}
  void SetItsVal(int x) { itsVal = x; }
  void Increment(){++itsVal;}
  void operator++ () { ++itsVal; }
};

Counter::Counter():
itsVal(0)
{}

int main(int argc, char const *argv[]) {
  Counter i;
  std::cout << "The value of i is " << i.GetItsVal() << std::endl;
  i.Increment();
  std::cout << "The value of i is " << i.GetItsVal() << std::endl;
  ++i;
  std::cout << "The value of i is " << i.GetItsVal() << std::endl;
  return 0;
}
