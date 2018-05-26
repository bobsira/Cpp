#include <iostream>
void swap(int x, int y);
int main(int argc, char const *argv[]) {
  /* code */
  int x = 5;
  int y = 10;
  std::cout << "Main. Before swap, x: " << x << " y: " << y << std::endl;
  swap(x,y);
  std::cout << "Main. After swap, x: " << x << " y: " << y << std::endl;
  return 0;
}
void swap(int x , int y) {
  int temp;
  std::cout << "Swap. Before swap, x: " << x << " y: " << y << std::endl;
  temp = x;
  x = y;
  y = temp;
  std::cout << "Swap. After swap, x: " << x << " y: " << y << std::endl;
}
