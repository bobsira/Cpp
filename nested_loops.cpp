#include <iostream>
int main(int argc, char const *argv[]) {
  for(int i = 0; i < 10; i++)
    std::cout << '\t' << i ; // \t represents a tab character, which will format our output nicely.
  std::cout  << '\n';
  for (int i = 0; i < 10; ++i) {
    std::cout << i;
    for(int j = 0; j < 10 ; ++j)
      std::cout << '\t' << i * j;
    std::cout << '\n';
  }
  return 0;
}
