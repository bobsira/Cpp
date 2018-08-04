#include <iostream>

enum BREED { GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };

class Mammal {
protected:
  int itsAge;
  int itsWeight;

public:
  Mammal (): itsAge(2), itsWeight(5) {}
  virtual ~Mammal (){}
  int GetAge() const { return itsAge; }
  void SetAge(int age) { itsAge = age; }
  int GetWeight() const{ return itsWeight; }
  void SetWeight(int weight){ itsWeight = weight; }
  void Speak() const { std::cout << "Mammal Sound" << '\n';}
  void Sleep() const { std::cout << "Shh.. I'm sleeping" << '\n';}
};


class Dog :public Mammal {
private:
  BREED itsBreed;

public:
  Dog ():itsBreed(GOLDEN){}
  virtual ~Dog (){}
  BREED GetBreed() const { return itsBreed; }
  void SetBreed(BREED breed){ itsBreed = breed; }
  void WagTail() const { std::cout << "Tail wagging..." << '\n';}
  void BegForFood() const { std::cout << "Begging for food.." << '\n';}
};

int main(int argc, char const *argv[]) {
  /* code */
  Dog Fido;
  Fido.Speak();
  Fido.WagTail();
  std::cout << "Fido is " << Fido.GetAge() << " years old" << std::endl;
  return 0;
}
