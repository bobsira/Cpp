#include<iostream>
int main(int argc, char const *argv[]) {
  int number_one, number_two;
  std::cout << "Enter number one" << '\n';
  std::cin >> number_one;
  std::cout << "Enter number two" << '\n';
  std::cin >> number_two;
  std::cout << number_one + number_two << '\n';
  return 0;
}
