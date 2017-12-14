#include <iostream>
// a structure in cpp
struct SpaceShip {
  int x_coordinate;
  int y_coordinate;
  std::string name;
};  // <- Notice that pesky semicolon; you must include it

int main(int argc, char const *argv[]) {
  // declare the variable
  SpaceShip my_ship;

  // use it
  my_ship.x_coordinate = 40;
  my_ship.y_coordinate = 40;
  my_ship.name = "USS Enterprise (NCC-1701-D)";

  return 0;
}
