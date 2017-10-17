#include<iostream>
#include<string>
int main(int argc, char const *argv[]) {
  std::string user_name;

  std::cout << "Please enter your name: ";
  std::cin >> user_name;
  std::cout << "Hi " << user_name << '\n';
  return 0;
}
