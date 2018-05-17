//Accessing data memebers of the objects on the heap
// using the -> operator

#include <iostream>
class SimpleCat {
private:
  int itsAge;

public:
  SimpleCat (){itsAge = 2;}
  virtual ~SimpleCat ();
  int GetAge() const { return itsAge;}
  void SetAge(int age){itsAge = age;}
};

SimpleCat::~SimpleCat(){}

int main(int argc, char const *argv[]) {
  /* code */
  SimpleCat *Frisky = new SimpleCat;
  std::cout << "Frisky is " << Frisky->GetAge() <<" years old " <<std::endl;
  Frisky->SetAge(5);
  std::cout << "Frisky is " << Frisky->GetAge() <<" years old " <<std::endl;
  delete Frisky;
  return 0;
}
