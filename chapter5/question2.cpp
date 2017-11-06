#include <iostream>
#include <string>
int main(int argc, char const *argv[]) {
  std::string num;
  std::cout << "Please choose from the options: 1, 2, 3" << '\n';
  std::cin >> num;

  while ( 1) {
    if ((num == "1" || num == "2" || num == "3")) {
      break;
    }else{
      std::cout << "Please choose from the options: 1, 2, 3" << '\n';
      std::cin >> num;
    }

  }
  return 0;
}
