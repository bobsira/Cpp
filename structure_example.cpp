#include <iostream>

struct PlayerInfo {
  int skill_level;
  std::string name;
};

int main(int argc, char const *argv[]) {
  // like normal variable types, you can make arrays of structures
  PlayerInfo players[5];
  for (size_t i = 0; i < 5; i++) {
    std::cout << "Please enter the name for player : " << '\n';
    // first access the element of the array, using normal
    // array syntax; then access the field of the structure
    // using the '.' syntax
    std::cin >> players[i].name;
    std::cout << "Please enter the skill level for " << players[i].name << '\n';
    std::cin >> players[i].skill_level;
  }
  for (size_t i = 0; i < 5; i++) {
    std::cout << players[i].name << " is at skill level " << players[i].skill_level << '\n';
  }

  return 0;
}
