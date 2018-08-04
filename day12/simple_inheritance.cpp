#include <iostream>
using namespace std;

enum BREED { GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB };

class Mammal {
protected:
  int itsAge;
  int itsWeight;

public:
  Mammal ();
  virtual ~Mammal ();
  int GetAge() const;
  void SetAge(int);
  int GetWeight() const;
  void SetWeight();
  void Speak() const;
  void Sleep() const;
};

class Dog : public Mammal {
protected:
  BREED itsBreed;

public:
  Dog();
  virtual ~Dog();
  BREED GetBreed() const;
  void SetBreed(BREED);
  void WagTail();
  void BegForFood();
};
