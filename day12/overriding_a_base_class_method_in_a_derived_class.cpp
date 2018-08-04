#include <iostream>
enum BREED { GOLDEN, CAIRN, DANDIE, DOBERMAN, SHETLAND, LAB };
class Mammal {
protected:
  int itsAge;
  int itsWeight;

public:
  Mammal (){ std::cout << "Mammal constructor.." << '\n';}
  virtual ~Mammal (){ std::cout << "Mammal destructor.." << '\n';}
  void Speak() const { std::cout << "Mammal Sound" << '\n';}
  void Sleep() const { std::cout << "Shh.. I'm sleeping" << '\n';}
};
class Dog : public Mammal {
private:
  BREED itsBreed;

public:
  Dog(){std::cout << "Mammal constructor" << '\n';}
  virtual ~Dog(){ std::cout << "Mammal destructor.." << '\n';}
  void WagTail() const { std::cout << "Tail wagging" << '\n';}
  void BegForFood() const {std::cout << "Begging for food" << '\n';}
  void Speak() const{ std::cout << "Woof!" << '\n';}
};

int main(int argc, char const *argv[]) {
  Mammal bigAnimal;
  Dog Fido;
  bigAnimal.Speak();
  Fido.Speak();
  return 0;
}
