// Listing 8.1 Demonstrates address-of operator
// and addresses of local variables
#include <iostream>
int main(int argc, char const *argv[]) {
  short shortVar = 5;
  long longVar = 65535;
  long sVar = -65535;

  std::cout << "shortVar:\t" << shortVar;
  std::cout << "\tAddress of shortVar:\t";
  std::cout << &shortVar << '\n';

  std::cout << "longVar:\t" << longVar;
  std::cout << "\tAddress of longVar:\t";
  std::cout << &longVar << '\n';

  std::cout << "sVar:\t\t" << sVar;
  std::cout << "\tAddress of sVar:\t" ;
  std::cout << &sVar << '\n';
  return 0;
}
