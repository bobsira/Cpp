#include <iostream>

struct EnemySpaceShip {
  int x_coordinate;
  int y_coordinate;
  int weapon_power;
};

EnemySpaceShip getNewEnemy();

EnemySpaceShip getNewEnemy(){
  EnemySpaceShip ship;
  ship.x_coordinate = 0;
  ship.y_coordinate = 0;
  ship.weapon_power = 20;
  return ship;
}

//To actually receive the variable that is returned, you'd write code like this:
//EnemySpaceShip ship = getNewEnemy();

EnemySpaceShip upgradeWeapons(EnemySpaceShip ship){
  ship.weapon_power +=10;
  return ship
}

//In order to use upgradeWeapons to modify a EnemySpaceShip we would have to write:
//ship = upgradeWeapons(ship);

int main(int argc, char const *argv[]) {
  EnemySpaceShip enemy = getNewEnemy();
  enemy = upgradeWeapons(enemy);
  EnemySpaceShip my_enemy_ships[10];
  return 0;
}
