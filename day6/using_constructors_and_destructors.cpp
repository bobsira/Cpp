// Demonstrates declaration of constructors and
// destructor for the Cat class
// Programmer created default constructor
#include <iostream>

class Cat {
private:
  int itsAge;

public:
  Cat (int initialAge);
  virtual ~Cat ();
  int GetAge();
  void SetAge(int age);
  void Meow();
};

Cat::Cat(int initialAge){
  itsAge = initialAge;
}

Cat::~Cat(){}

int Cat::GetAge(){
  return itsAge;
}

void Cat::SetAge(int age){
  itsAge = age;
}

void Cat::Meow(){
  std::cout << "Meow." << '\n';
}

int main(int argc, char const *argv[]) {
  Cat Frisky(5);
  Frisky.Meow();
  std::cout << "Frisky is a cat who is " ;
  std::cout << Frisky.GetAge() << " years old.\n";
  Frisky.Meow();
  Frisky.SetAge(7);
  std::cout << "Now Frisky is " ;
  std::cout << Frisky.GetAge() << " years old.\n";
  return 0;
}
