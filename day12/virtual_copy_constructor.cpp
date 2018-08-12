#include <iostream>

class Mammal {
protected:
  int itsAge;

public:
  Mammal () : itsAge(1) { std::cout << "Mammal constructor..." << '\n';}
  virtual ~Mammal (){ std::cout << "Mammal destructor..." << '\n';}
  Mammal(const Mammal & rhs);
  virtual void Speak() const { std::cout << "Mammal speak!" << '\n';}
  virtual Mammal* Clone() { return new Mammal(*this);}
  int GetAge() const { return itsAge; }
};

Mammal::Mammal(const Mammal & rhs):itsAge(rhs.GetAge()){
  std::cout << "Mammal Copy Constructor..." << '\n';
}

class Dog : public Mammal{
public:
  Dog (){ std::cout << "Dog constructor..." << '\n';}
  virtual ~Dog (){ std::cout << "Dog destructor..." << '\n';}
  Dog(const Dog & rhs);
  void Speak() const { std::cout << "Woof!" << '\n';}
  virtual Mammal* Clone(){return new Dog(*this);}
};

Dog::Dog(const Dog & rhs):
Mammal(rhs)
{
  std::cout << "Dog copy constructor..." << '\n';
}

class Cat : public Mammal{

public:
  Cat (){ std::cout << "Cat constructor..." << '\n';}
  ~Cat (){std::cout << "Cat destructor" << '\n';}
  Cat(const Cat &);
  void Speak() const { std::cout << "Meow!" << '\n';}
  virtual Mammal* Clone(){return new Cat(*this);}
};

Cat::Cat(const Cat & rhs):
Mammal(rhs)
{
  std::cout << "Cat copy constructor" << '\n';
}

enum ANIMALS { MAMMAL, DOG, CAT  };
const int NumAnimalTypes = 3;
int main(int argc, char const *argv[]) {
  Mammal *theArray[NumAnimalTypes];
  Mammal *ptr;
  int choice, i;
  for(i = 0; i < NumAnimalTypes; i++){
    std::cout << "(1)dog (2)cat (3)Mammal: ";
    std::cin >> choice;
    switch (choice) {
      case DOG: ptr = new Dog;
      break;
      case CAT: ptr = new Cat;
      break;
      default: ptr = new Mammal;
    }
    theArray[i] = ptr;
  }

  Mammal *OtherArray[NumAnimalTypes];
  for(i = 0; i < NumAnimalTypes; i++){
    theArray[i]->Speak();
    OtherArray[i] = theArray[i]->Clone();
  }
  for(i=0;i<NumAnimalTypes;i++) OtherArray[i]->Speak();
  return 0;
}
