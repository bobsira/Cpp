#include<iostream>
int main(int argc, char const *argv[]) {
  int first_argument;
  int second_argument;
  std::cout << "Enter first_argument:" << '\n';
  std::cin >> first_argument;
  std::cout << "Enter second_argument" << '\n';
  std::cin >> second_argument;

  std::cout << first_argument << " * " <<second_argument << " = " <<
  first_argument * second_argument << '\n';

  std::cout << first_argument << " + " <<second_argument << " = " <<
  first_argument + second_argument << '\n';

  std::cout << first_argument << " / " <<second_argument << " = " <<
  first_argument / second_argument << '\n';

  std::cout << first_argument << " - " <<second_argument << " = " <<
  first_argument - second_argument << '\n';
  return 0;
}
