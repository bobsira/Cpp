#include <iostream>
int main(int argc, char const *argv[]) {
  int size;
  std::cin >> size;
  int arr[size];
  for (size_t i = 0; i < size; i++) {
    std::cin >> arr[i];
  }

  for (int i = size - 1; i > -1 ; i--) {
    std::cout << arr[i] << '\n';
  }
  return 0;
}
