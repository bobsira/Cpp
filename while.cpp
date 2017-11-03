#include <iostream>
int main(int argc, char const *argv[]) {
  int i = 0;
  while (i<10) { //while i is less than 10
    std::cout << i << '\n';
    i++; // update i so that the condition can be met eventually
  }
  return 0;
}
