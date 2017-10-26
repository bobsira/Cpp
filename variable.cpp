#include <iostream>
int main(int argc, char const *argv[]) {
  int x;
  std::cout << "Enter a number: " << '\n';
  std::cin >> x;
  if (x<10) {
    std::cout << x << " is less than 10" << '\n';
  }
  return 0;
}
