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
class Dog {
  // You might receive a warning that you are hiding a function!
public:
  void Move() const { std::cout << "Dog move 5 steps." << '\n';}
};
int main(int argc, char const *argv[]) {
  Mammal bigAnimal;
  Dog Fido;
  bigAnimal.Move();
  bigAnimal.Move(2);
  Fido.Move();
  //Fido.Move(10);
  return 0;
}
