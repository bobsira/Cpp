#include <iostream>
class Add {
public:
  int sum(int num1,int num2){
    return num1+num2;
  }
  int sum(int num1,int num2,int num3){
    return num1+num2+num3;
  }
};
int main(int argc, char const *argv[]) {
  Add obj;
  std::cout << "Output: "<<obj.sum(10,20) << std::endl;
  std::cout << "Output: "<<obj.sum(11,22,33) << std::endl;
  return 0;
}
