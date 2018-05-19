// Demonstrate a stray pointer

typedef unsigned short int USHORT;
#include <iostream>

int main(int argc, char const *argv[]) {

  USHORT * pInt = new USHORT;
  std::cout << "*pInt: " << *pInt << std::endl;
  delete pInt;

  long * pLong = new long;
  *pLong = 90000;
  std::cout << "*pLong: " << *pLong << std::endl;

  *pInt = 20;  // uh oh, this was deleted!

  std::cout << "*pInt: " << *pInt << std::endl;
  std::cout << "*pLong: " << *pLong << std::endl;
  delete pLong;
  return 0;
}
