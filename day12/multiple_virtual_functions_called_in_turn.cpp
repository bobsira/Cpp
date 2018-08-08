#include <iostream>
class Mammal {
protected:
  int itsAge;

public:
  Mammal ():itsAge(1) { }
  virtual ~Mammal () { }
  virtual void Speak() const { std::cout << "Mammal speak!" << '\n';}
};

class Dog: public Mammal {
public:
  void Speak() const { std::cout << "Woof!" << '\n';}
};

class Cat: public Mammal {
public:
  void Speak() const { std::cout << "Meow!" << '\n';}
};

class Horse: public Mammal {
public:
  void Speak() const { std::cout << "Winnie!" << '\n';}
};

class Pig: public Mammal {
public:
  void Speak() const { std::cout << "Oink!" << '\n';}
};

int main(int argc, char const *argv[]) {
  Mammal* theArray[5];
  Mammal* ptr;
  int choices, i;
  for (size_t i  = 0; i  < 5; i ++) {
    std::cout << "(1)dog (2)cat (3)Horse (4)Pig" << '\n';
    std::cin >> choices;
    switch (choices) {
      case 1: ptr = new Dog;
      break;
      case 2: ptr = new Cat;
      break;
      case 3: ptr = new Horse;
      break;
      case 4: ptr = new Pig;
      break;
      default: ptr = new Mammal;
      break;
    }
    theArray[i] = ptr;
  }

  for (size_t i  = 0; i  < 5; i ++) {
    theArray[i]->Speak();
  }
  return 0;
}
