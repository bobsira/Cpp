//Listing 9.9
// Returning multiple values from a function
// using references
#include <iostream>
enum ERR_CODE { SUCCESS, ERROR };
ERR_CODE Factor(int, int&, int&);
int main(int argc, char const *argv[]) {
  int number, squared,cubed;
  ERR_CODE result;
  std::cout << "Enter a number (0 - 20): ";
  std::cin >> number;
  result = Factor(number,squared,cubed);
  if (result==SUCCESS) {
    std::cout << "number: " << number << std::endl;
    std::cout << "square: " << squared << std::endl;
    std::cout << "cubed: " << cubed << std::endl;
  }else{
    std::cout << "Error encountered!!" << '\n';
  }
  return 0;
}

ERR_CODE Factor(int n, int &rSquared, int &rCubed){
  if (n>20) {
    return ERROR;  // simple error code
  } else {
    rSquared = n*n;
    rCubed = n*n*n;
    return SUCCESS;
  }
}
