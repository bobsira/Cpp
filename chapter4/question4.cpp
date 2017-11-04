#include <iostream>
#include <string>
int main(int argc, char const *argv[]) {
  std::string password;
  std::cout << "Enter your password " << '\n';
  std::cin >> password;
  /* using while loop for implementation*/
  while (password!="AZaz09@account") {
    std::cout << "Wrong password-try again" << '\n';
    std::cin >> password;
  }
  /*using do while loop for implementation*/
  std::string pass;
  do {
    if(pass=="")
      std::cout << "Enter your pass" << '\n';
    else
      std::cout << "Wrong password-try again" << '\n';
    std::cin >> pass;
  } while(pass!="AZaz09@account");

  std::cout << "Welcome Lord Bob" << '\n';
  return 0;
}
