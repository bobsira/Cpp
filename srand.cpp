#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int randRange(int low, int high){
  //while (1) {
    //int rand_result = rand();
    //if (rand_result >= low && rand_result <= high) {
      //return rand_result;
    //}
  // we get a random number, get it to be between 0 and the difference
  // between high and low, then add the lowest possible value
  return rand() % ( high - low ) + low;
  }
int main(int argc, char const *argv[]) {
  /* call just once, at the very start */
  srand( time( NULL ));
  //std::cout << rand() << '\n';
  for (int i = 0; i < 1000; i++) {
    /* code */
    std::cout << randRange(4,10) << '\n';
  }
  return 0;
}
