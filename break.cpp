#include <iostream>
#include <string>
int main(int argc, char const *argv[]) {
  std::string password;
  while (1) {
    std::cout << "Please enter your password" << '\n';
    std::cin >> password;
    if(password=="bobsira")
      break;
  }
  std::cout << "Welcome, you got the password right" << '\n';
  return 0;
}
