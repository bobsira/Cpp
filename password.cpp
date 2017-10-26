#include <iostream>
#include <string>
int main(int argc, char const *argv[]) {
  std::string password;
  std::cout << "Enter your password: " << '\n';
  getline( std::cin , password, '\n');
  if (password == "xyzzy") {
    std::cout << "Access allowed " << '\n';
  } else {
    std::cout << "Bad password. Denied access!" << '\n';
    return 0;
  }
  return 0;
}
