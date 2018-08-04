#include <iostream>
enum BREED { GOLDEN, CAIRN, DANDIE, DOBERMAN, SHETLAND, LAB };
class Mammal {
protected:
  int itsAge;
  int itsWeight;

public:
  Mammal ();
  Mammal (int age);
  virtual ~Mammal ();
  int GetAge() const { return itsAge; }
  void SetAge(int age) { itsAge = age; }
  int GetWeight() const{ return itsWeight; }
  void SetWeight(int weight){ itsWeight = weight; }
  void Speak() const { std::cout << "Mammal Sound" << '\n';}
  void Sleep() const { std::cout << "Shh.. I'm sleeping" << '\n';}
};
class Dog : public Mammal {
private:
  BREED itsBreed;

public:
  Dog ();
  Dog (int age);
  Dog (int age, int weight);
  Dog (int age, BREED breed);
  Dog (int age, int weight, BREED breed);
  virtual ~Dog ();
  BREED GetBreed() const { return itsBreed; }
  void SetBreed(BREED breed){ itsBreed = breed; }
  void WagTail() const { std::cout << "Tail wagging..." << '\n';}
  void BegForFood() const { std::cout << "Begging for food.." << '\n';}
};

Mammal::Mammal():
itsAge(1),
itsWeight(5)
{
  std::cout << "Mammal constructor..." << '\n';
}

Mammal::Mammal(int age):
itsAge(age),
itsWeight(5)
{
  std::cout << "Mammal(int) constructor..." << '\n';
}

Mammal::~Mammal(){
  std::cout << "Mammal destructor..." << '\n';
}

Dog :: Dog():
Mammal(),
itsBreed(GOLDEN)
{
  std::cout << "Dog constructor..." << '\n';
}

Dog :: Dog(int age):
Mammal(age),
itsBreed(GOLDEN)
{
  std::cout << "Dog(int) constructor..." << '\n';
}

Dog :: Dog(int age, int weight):
Mammal(age),
itsBreed(GOLDEN)
{
  itsWeight = weight;
  std::cout << "Dog(int,int) constructor..." << '\n';
}

Dog :: Dog(int age, int weight, BREED breed):
Mammal(age),
itsBreed(breed)
{
  itsWeight = weight;
  std::cout << "Dog(int,int,BREED) constructor..." << '\n';
}

Dog :: Dog(int age, BREED breed):
Mammal(age),
itsBreed(breed)
{
  std::cout << "Dog(int,BREED) constructor..." << '\n';
}

Dog::~Dog(){
  std::cout << "Dog destructor..." << '\n';
}

int main(int argc, char const *argv[]) {
  Dog Fido;
  Dog rover(5);
  Dog buster(6,8);
  Dog yorkie(3,GOLDEN);
  Dog dobbie(4,20,DOBERMAN);
  return 0;
}
