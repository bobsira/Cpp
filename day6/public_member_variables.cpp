// Demonstrates declaration of a class and
// definition of an object of the class

#include <iostream>
class Cat {            // declare the Cat class
public:                // members that follow are public
  int itsAge;          // member variable
  int itsWeight;       // member variable
};

int main(int argc, char const *argv[]) {
  Cat Frisky;
  Frisky.itsAge = 5;
  std::cout << "Frisky is a cat who is " ;
  std::cout << Frisky.itsAge << " years old.\n";
  return 0;
}
