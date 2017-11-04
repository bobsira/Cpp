#include <iostream>
int main(int argc, char const *argv[]) {
  char op;
  float num1,num2;
  std::cout << "Enter operator either + or - or * or /" << '\n';
  std::cin >> op;
  std::cout << "Enter two operands:" << '\n';
  std::cin >> num1 >> num2;

  switch (op) {
    case '+':
      std::cout << num1+num2 << '\n';
      break;
   case '-':
      std::cout << num1-num2 << '\n';
      break;
   case '*':
      std::cout << num1*num2 << '\n';
      break;
   case '/':
      std::cout << num1/num2 << '\n';
      break;
   default:
      std::cout << "Incorrect operand" << '\n';
      break;
  }
  return 0;
}
