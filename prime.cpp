#include <iostream>
#include <cmath>
bool isDivisible(int number, int divisor);
bool isPrime(int number);
int main(int argc, char const *argv[]) {
  for (int i = 0; i < 100; i++) {
    if (isPrime(i)) {
      std::cout << i << '\n';
    }
  }
  return 0;
}
bool isPrime(int number){
  for (int i = 2; i < sqrt(number); i++) {
    if (isDivisible(number,i)) {
      return false;
    }
  }
  return true;
}
bool isDivisible(int number,int divisor){
  return number % divisor == 0 ;
}
