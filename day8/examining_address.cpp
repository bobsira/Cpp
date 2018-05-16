// Listing 8.3
// What is stored in a pointer.
#include <iostream>
int main(int argc, char const *argv[]) {

  unsigned short int myAge = 5, yourAge = 10;
  unsigned short int * pAge = &myAge;

  std::cout << "myAge:\t" << myAge
  << "\t\tyourAge:\t" << yourAge << std::endl;
  std::cout << "&myAge:\t" << &myAge
  << "\t&yourAge:\t" << &yourAge << std::endl;

  std::cout << "pAge:\t" << pAge << std::endl;
  std::cout << "*pAge:\t" << *pAge << std::endl;

  std::cout << "\nReassigning: pAge = &yourAge..." << std::endl << std::endl;
  pAge = &yourAge;   // reassign the pointer

  std::cout << "myAge:\t" << myAge
  << "\t\tyourAge:\t" << yourAge << std::endl;
  std::cout << "&myAge:\t" << &myAge
  << "\t&yourAge:\t" << &yourAge << std::endl;

  std::cout << "pAge:\t" << pAge << std::endl;
  std::cout << "*pAge:\t" << *pAge << std::endl;

  std::cout << "\n&pAge:\t" << &pAge << std::endl;
  return 0;
}
