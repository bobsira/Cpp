#include <iostream>
class Mammal {
protected:
  int itsAge;
  int itsWeight;

public:
  void Move() const { std::cout << "Mammal move one step." << '\n';}
  void Move(int distance) const{
    std::cout << "Mammal move " << distance <<" steps."<<std::endl;
  }
};
class Dog : public Mammal{

public:
  void Move() const;
};

void Dog :: Move() const{
  std::cout << "In dog move..." << '\n';
  Mammal::Move(3);
}
int main(int argc, char const *argv[]) {
  Mammal bigAnimal;
  Dog Fido;
  bigAnimal.Move(2);
  Fido.Mammal::Move(6);
  return 0;
}
