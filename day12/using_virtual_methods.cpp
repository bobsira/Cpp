#include <iostream>
class Mammal {
protected:
  int itsAge;

public:
  Mammal () : itsAge(1) { std::cout << "Mammal constructor..." << '\n';}
  virtual ~Mammal () { std::cout << "Mammal destructor..." << '\n';}
  void Move() const { std::cout << "Mammal move one step" << '\n';}
  virtual void Speak() const { std::cout << "Mammal Speak!" << '\n';}
};
class Dog : public Mammal{
public:
  Dog () { std::cout << "Dog constructor..." << '\n';}
  virtual ~Dog () { std::cout << "Dog destructor..." << '\n';}
  void WagTail() { std::cout << "wagging Tail..." << '\n';}
  void Speak() const { std::cout << "Woof!" << '\n';}
  void Move() const{ std::cout << "Dog move 5 steps..." << '\n';}
};
int main(int argc, char const *argv[]) {
  Mammal *pDog = new Dog;
  pDog->Move();
  pDog->Speak();
  return 0;
}
