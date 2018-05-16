// Listing 8.2 Using pointers
#include <iostream>

typedef unsigned short int USHORT;

int main(int argc, char const *argv[]) {




  USHORT myAge;       // a variable
  USHORT * pAge = 0;  // a pointer

  myAge = 5 ;

  std::cout << "myAge" << myAge << std::endl;
  pAge = &myAge;     // assigns address of myAge to pAge
  std::cout << "*pAge: " << *pAge << std::endl << std::endl;

  std::cout << "Setting *pAge = 7..." << std::endl;
  *pAge = 7;        // sets myAge to 7

  std::cout << "*pAge: " << *pAge << std::endl;
  std::cout << "myAge: " << myAge << std::endl << std::endl;

  std::cout << "Setting *pAge = 9..." << std::endl;
  *pAge = 9;        // sets myAge to 9

  std::cout << "myAge: " << myAge << std::endl;
  std::cout << "*pAge: " << *pAge << std::endl;

  return 0;
}
