#include <iostream>
int main(int argc, char const *argv[]) {
  /* The loop goes while i < 10, and i increases by one every loop */
  for (int i = 0; i < 10; i++) {
    /* keep in mind that the loop condition checks
        the conditional statement before it loops again.
        consequently, when i equal 10 the loop breaks.
        i is updated before the condition is checked. */
        std::cout << i << " squared is "<< i * i << '\n';
  }
  return 0;
}
