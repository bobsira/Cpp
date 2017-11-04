#include <iostream>
#include <string>
int main(int argc, char const *argv[]) {
  std::string user1,user2;
  int age_one,age_two;

  std::cout << "Enter your name" << '\n';
  getline(std::cin,user1,'\n');
  std::cout << "Enter your age" << '\n';
  std::cin >> age_one;

  std::cin.get();
  std::cout << "Enter your name" << '\n';
  getline(std::cin,user2,'\n');
  std::cout << "Enter your age" << '\n';
  std::cin >> age_two;

  if (age_one >= 100 && age_two >= 100) {
    std::cout << "Abnormal ages for the both of you guys" << '\n';
    return 0;
  }
  if (age_one >= 100) {
    std::cout << user1 <<" your age is not valide" << '\n';
    return 0;
  }

  if (age_two >= 100) {
    std::cout << user2 <<" your age is not valide" << '\n';
    return 0;
  }

  if (age_one>age_two) {
    std::cout << user1 << " is older" << '\n';
  } else if(age_two>age_one){
    std::cout << user2 <<" is older" << '\n';
  }else if(age_one == age_two){
    std::cout << user1 <<" and " << user2 << " have the same age" << '\n';
  }
  return 0;
}
