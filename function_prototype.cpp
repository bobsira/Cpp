#include <iostream>
// function prototype for add
int add( int x , int y);
int main(int argc, char const *argv[]) {
  int result =  add (1,2);
  std::cout << "The result is: " << result << '\n';
  std::cout << "Adding 3 and 4 gives us: " << add(3,4) << '\n';
  return 0;
}
int add(int x, int y){
  return x + y;
}
