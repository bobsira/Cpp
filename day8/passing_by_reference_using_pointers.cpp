#include <iostream>
void swap(int *px, int *py);
int main(int argc, char const *argv[]) {
  /* code */
  int x = 5;
  int y = 10;
  std::cout << "Main. Before swap, x: " << x << " y: " << y << std::endl;
  swap(&x,&y);
  std::cout << "Main. After swap, x: " << x << " y: " << y << std::endl;
  return 0;
}
void swap(int *px , int *py) {
  int temp;
  std::cout << "Swap. Before swap, *px: " << *px << " *py: " << *py << std::endl;
  temp = *px;
  *px = *py;
  *py = temp;
  std::cout << "Swap. After swap, *px: " << *px << " *py: " << *py << std::endl;
}
