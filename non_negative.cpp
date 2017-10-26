#include <iostream>
int main(int argc, char const *argv[]) {
  int x;
  std::cout << "Enter a number " << '\n';
  std::cin >> x;
  if (x<0) {
    std::cout << "You've entered a negative number " << '\n';
  } else if(x == 0){
    std::cout << "You've entered zero" << '\n';
  } else {
    std::cout << "You've entered a non-negative number" << '\n';
  }
  return 0;
}
