#include<iostream>
#include<string>
int main(int argc, char const *argv[]) {
  std::string user_first_name;
  std::string user_last_name;

  std::cout << "Please enter your first name: ";
  std::cin >> user_first_name;
  std::cout << "Please enter your last name:  ";
  std::cin >> user_last_name;

  std::string user_full_name = user_first_name + " " + user_last_name;
  std::cout << "Your name is " << user_full_name << '\n';

  // getline() function
  std::cout << "Enter your full names: ";
  std::cin.get();
  getline(std::cin,user_full_name,'\n');
  std::cout << "Your name is " << user_full_name << '\n';
  return 0;
}
