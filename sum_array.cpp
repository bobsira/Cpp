#include <iostream>
int sumArray(int values[], int size){
  int sum = 0;
  // this array stops when i == size. why? The last element is size - 1
  for (size_t i = 0; i < size; i++) {
    /* code */
    sum += values[ i ];
  }
  return sum;
}
int main(int argc, char const *argv[]) {
  /* code */
  int values[ 10 ];
  for (size_t i = 0; i < 10; i++) {
    /* code */
    std::cout << "Enter value " << i << ": ";
    std::cin >> values[i];
  }
  std::cout << sumArray(values,10) << '\n';
  return 0;
}
