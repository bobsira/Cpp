#include <iostream>
int main(int argc, char const *argv[]) {
  int array[8][8]; // Declare an array that looks like a chessboard
  for (int i = 0; i < 8; i++) {
    /* code */
    for (int j = 0; j < 8; j++) {
      /* code */
      array[i][j] = i * j; // set each element to a value
    }
  }
  std::cout << "Multiplication table" << '\n';
  for (int i = 0; i < 8; i++) {
    /* code */
    for (int j = 0; j < 8; j++) {
      /* code */
      std::cout << "[ "<<i<<"] [ " <<j <<" ] = ";
      std::cout << array[i][j] << " ";
      std::cout<< '\n';
    }
  }
  return 0;
}
