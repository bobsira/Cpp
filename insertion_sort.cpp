#include <iostream>
void read_ints(/* arguments */) {
  int values[100];
  for (size_t i = 0; i < 100; i++) {
    std::cout << "Enter value " << i << ": ";
    std::cin >> values[i];
  }
}
