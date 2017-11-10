#include <iostream>
int main(int argc, char const *argv[]) {
  int i = 0;
  while (i < 20) {
    i++;
    if(i==10)
      continue;
    std::cout << i << '\n';
  }
  return 0;
}
