#include <iostream>
int main(int argc, char const *argv[]) {
  int x;
  int y;

  std::cout << "Enter a number: " << '\n';
  std::cin >> x;
  std::cout << "Enter another number " << '\n';
  std::cin >> y;

  if (x<10) {
    std::cout << x << " is less than 10" << '\n';
  }

  bool is_y_two = (y == 2); /* == for comparison*/
  if (is_y_two) {
    std::cout << "The number entered is " << y   << '\n';
  }

  return 0;
}
