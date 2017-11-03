#include <iostream>
#include <string>
int main(int argc, char const *argv[]) {
  std::string password;
  do {
    std::cout << "Please enter your password:" << '\n';
    std::cin >> password;
  } while(password != "bobsira");
  std::cout << "Welcome, you got the password right" << '\n';
  return 0;
}
