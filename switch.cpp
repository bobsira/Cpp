#include <iostream>
void playgame() {
}
void loadgame() {
}
void playmultiplayer() {
}
int main(int argc, char const *argv[]) {
  int input;

  std::cout << "1. Play game " << '\n';
  std::cout << "2. Load game" << '\n';
  std::cout << "3. Play multiplayer" << '\n';
  std::cout << "4. Exit" << '\n';
  std::cin >> input;

  switch (input) {
    case 1:
      playgame();
      break;
    case 2:
      loadgame();
      break;
    case 3:
      playmultiplayer();
      break;
    case 4:
      std::cout << "Thank you for playing!" << '\n';
      break;
    default:
      std::cout << "Error, bad input, quitting" << '\n';
      break;
  }
  return 0;
}
