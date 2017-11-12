#include <iostream>
void changeArgument(int x ) {
  x = x + 5;
}
int divide( int numerator, int denominator){
  if (denominator == 0) {
    int result = 0;
    return result;
  }
  int result = numerator / denominator;
  return result;
}
int main(int argc, char const *argv[]) {
  int y = 4;
  changeArgument( y ); // y will be unharmed by the function call
  std::cout << y << '\n'; // still prints 4
  return 0;
}
