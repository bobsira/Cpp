#include <iostream>
int main(int argc, char const *argv[]) {
  int input;
  int sum = 0;
  while (1) {
    std::cin >> input;
    if (input==0) {
      break;
    }
    sum += input;
    std::cout << "Running sum is: " << sum << '\n';
  }
  return 0;
}
