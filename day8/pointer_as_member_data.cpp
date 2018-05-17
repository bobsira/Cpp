//Pointers as data memebrs accessed with -> operator
#include <iostream>
class SimpleCat {
private:
  int * itsAge;
  int * itsWeight;

public:
  SimpleCat ();
  virtual ~SimpleCat ();
  int GetAge() const{return *itsAge;}
  void SetAge(int age){*itsAge=age;}
  int GetWeight() const{return *itsWeight;}
  void SetWeight(int weight){*itsWeight=weight;}
};

SimpleCat::SimpleCat(){
  itsAge = new int(2);
  itsWeight = new int(5);
}

SimpleCat::~SimpleCat(){
  delete itsAge;
  delete itsWeight;
}

int main(int argc, char const *argv[]) {
  SimpleCat *Frisky = new SimpleCat;
  std::cout << "Frisky is " << Frisky->GetAge() <<" years old" <<std::endl;
  Frisky->SetAge(5);
  std::cout << "Frisky is " << Frisky->GetAge() <<" years old" <<std::endl;
  delete Frisky;
  return 0;
}
