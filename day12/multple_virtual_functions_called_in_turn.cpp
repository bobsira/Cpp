#include <iostream>

class Mammal {
protected:
  int itsAge;

public:
  Mammal ():itsAge(1) { }
  virtual ~Mammal (){ }
  virtual void Speak() const { std::cout << "Mammal Speak!" << '\n';}
};

class Dog : public Mammal {
public:
  void Speak() const { std::cout << "Woof!" << '\n';}
};

class Cat : public Mammal {
public:
  void Speak() const { std::cout << "Meow!" << '\n';}
};

class Horse : public Mammal {
public:
  void Speak() const { std::cout << "Winnie!" << '\n';}
};

class Pig : public Mammal {
public:
  void Speak() const { std::cout << "Oink!" << '\n';}
};

int main(int argc, char const *argv[]) {
  Mammal* theArray[5];
  Mammal* ptr;
  int choice, i;
  for (i= 0; i< 5; i++) {
    std::cout << "(1)dog (2)cat (3)horse (4)pig: ";
    std::cin >> choice;
    switch (choice) {
      case 1 : ptr = new Dog;
      break;
      case 2 : ptr = new Cat;
      break;
    }
  }
  return 0;
}
