#include <iostream>
using namespace std;

class Cat {
public:
  int itsAge;
  int itsWeight;
  void Meow();
};

int main(int argc, char const *argv[]) {
  Cat Frisky; // define a Cat

  Frisky.itsWeight = 50;
  //Frisky.Meow();

  std::cout << Frisky.itsWeight << '\n';
  return 0;
}
