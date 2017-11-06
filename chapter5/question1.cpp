#include <iostream>
int main(int argc, char const *argv[]) {
  int b = 99;
  while (b>= 0) {
    std::cout<<b<<" bottles of bear on the wall,"<<b<<" bottles of beer."<<'\n';
    std::cout << "Take one down, pass it around,";
    b--;
    if (b==0) {
      std::cout << "No more bottles of beer on the wall, no more bottles of beer."<< '\n';
      std::cout << "We've taken them down and passed them around; now we're drunk and passed out!";
      break;
    }
  }
  return 0;
}
