#include <iostream>
#include<string>
int main(int argc, char const *argv[]) {
  /* code */
  std::string name;
  getline(std::cin,name,'\n');
  //std::cin >> name;
  std::cout << name << '\n';
  return 0;
}
