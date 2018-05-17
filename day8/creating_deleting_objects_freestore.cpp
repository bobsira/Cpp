//Creating objects on the free store
// using new and delete
#include <iostream>
class SimpleCat {
private:
  int itsAge;

public:
  SimpleCat ();
  virtual ~SimpleCat ();
};

SimpleCat::SimpleCat(){
  std::cout << "Constructor called." << '\n';
  itsAge = 1;
}

SimpleCat::~SimpleCat(){
  std::cout << "Destructor called. " << '\n';
}

int main(int argc, char const *argv[]) {
  std::cout << "SimpleCat Frisky... " << '\n';
  SimpleCat Frisky;
  std::cout << "SimpleCat *pRags = new SimpleCat..." << '\n';
  SimpleCat * pRags = new SimpleCat;
  std::cout << "delete pRags..." << '\n';
  delete pRags;
  std::cout << "Exiting, watch Frisky go... " << '\n';
  return 0;
}
