#include <iostream>
class Cat {
public:
  int Age;
  int Weight;
  void Meow();
};

int main(int argc, char const *argv[]) {
  Cat Frisky;
  Frisky.Age = 8;
  Frisky.Weight = 18;
  Frisky.Meow();
  return 0;
}
