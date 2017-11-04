#include <iostream>
int main(int argc, char const *argv[]) {
  std::cout << "Enter your password" << '\n';
  int password;
  std::cin >> password;
  if (password==7 || password==1) {
    std::cout << "correct password" << '\n';
  }else{
    std::cout << "wrong password" << '\n';
  }
  return 0;
}
