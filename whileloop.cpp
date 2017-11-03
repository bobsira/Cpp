#include <iostream>
int main(int argc, char const *argv[]) {
  /* infinite loops */

  int i = 1;
  while (i=1) {
    std::cin >> i;
  }
  while (true) {
    std::cout << "I'm looping" << '\n';
  }
  return 0;
}
