#include <iostream>
enum BREED { GOLDEN, CAIRN, DANDIE, DOBERMAN, SHETLAND, LAB };
class Mammal {
protected:
  int itsAge;
  int itsWeight;

public:
  Mammal ();
  virtual ~Mammal ();
  int GetAge() const { return itsAge; }
  void SetAge(int age) { itsAge = age; }
  int GetWeight() const{ return itsWeight; }
  void SetWeight(int weight){ itsWeight = weight; }
  void Speak() const { std::cout << "Mammal Sound" << '\n';}
  void Sleep() const { std::cout << "Shh.. I'm sleeping" << '\n';}
};

class Dog: public Mammal {
private:
  BREED itsBreed;

public:
  Dog ();
  virtual ~Dog ();
  BREED GetBreed() const { return itsBreed; }
  void SetBreed(BREED breed){ itsBreed = breed; }
  void WagTail() const { std::cout << "Tail wagging..." << '\n';}
  void BegForFood() const { std::cout << "Begging for food.." << '\n';}
};

Mammal :: Mammal():
itsAge(3),
itsWeight(5)
{
  std::cout << "Mammal constructor..." << '\n';
}

Mammal :: ~Mammal(){
  std::cout << "Mammal destructor..." << '\n';
}

Dog :: Dog():
itsBreed(GOLDEN)
{
  std::cout << "Dog constructor..." << '\n';
}

Dog::~Dog(){
  std::cout << "Dog destructor..." << '\n';
}

int main(int argc, char const *argv[]) {
  /* code */
  Dog Fido;
  Fido.Speak();
  Fido.WagTail();
  std::cout << "Fido is " << Fido.GetAge() << " years old" << std::endl;
  return 0;
}
