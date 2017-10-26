#include <iostream>
#include <string>
int main(int argc, char const *argv[]) {
  std::string username;
  std::string password;
  std::cout << "Enter username" << '\n';
  getline( std::cin, username, '\n');
  std::cout << "Enter password" << '\n';
  getline( std::cin, password, '\n');
  if ( username == "root" && password == "tiffany") {
    std::cout << "Access allowed " << '\n';
  } else {
    std::cout << "Bad password. Denied access!" << '\n';
    return 0;
  }
  return 0;
}
