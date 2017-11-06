#include <iostream>
#include <string>
int main(int argc, char const *argv[]) {
  int count = 3;
  std::string password;
  while (count >= 0) {
    std::cout << "Enter Your password" << '\n';
    std::cin >> password;
    if (password=="bobsira") {
      std::cout << "Welcome" << '\n';
    }else{
      std::cout << "Wrong password" << '\n';
      std::cout << "You have "<< count << " attempts remaining" << '\n';
      count--;
    }
  }
  return 0;
}
