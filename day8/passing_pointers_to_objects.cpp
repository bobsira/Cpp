//Listing 9.10 - Passing pointers to objects
#include <iostream>
class SimpleCat {
private:

public:
  SimpleCat ();// constructor
  SimpleCat(SimpleCat&);//copy constructor
  virtual ~SimpleCat ();// destructor
};

SimpleCat::SimpleCat(){
  std::cout << "Simple Cat Constructor" << '\n';
}

SimpleCat::SimpleCat(SimpleCat&){
  std::cout << "Simple Cat Copy Constructor" << '\n';
}

SimpleCat::~SimpleCat(){
  std::cout << "Simple Cat Destructor" << '\n';
}

SimpleCat FunctionOne (SimpleCat theCat);
SimpleCat* FunctionTwo (SimpleCat *theCat);

int main(int argc, char const *argv[]) {
  /* code */
  std::cout << "Making a Cat..." << '\n';
  SimpleCat Frisky;
  std::cout << "Calling FunctionOne..." << '\n';
  FunctionOne(Frisky);
  std::cout << "Calling FunctionTwo..." << '\n';
  FunctionTwo(&Frisky);
  return 0;
}

// FunctionOne, passes by value
SimpleCat FunctionOne(SimpleCat theCat){
  std::cout << "Function One. Returning.." << '\n';
  return theCat;
}

// functionTwo, passes by reference
SimpleCat* FunctionTwo(SimpleCat *theCat){
  std::cout << "Function One. Returning.." << '\n';
  return theCat;
}
