#include "Employee.hpp"
Employee::Employee(){}
Employee::Employee(int age, int yearOfService, int salary){
  setAge(age);
  setYearOfService(yearOfService);
  setSalary(salary);
}
Employee::~Employee(){}
void Employee::reportSalaryDetails(){
  std::cout << "reports how many thousands of dollars the employee earns, rounded to the nearest 1,000." << '\n';
}

int main(int argc, char const *argv[]) {
  Employee Elvis;
  Elvis.setAge(21);
  Elvis.setYearOfService(10);
  Elvis.setSalary(80000);
  std::cout << Elvis.getAge() << '\n';
  std::cout << Elvis.getYearOfService() << '\n';
  std::cout << Elvis.getSalary() << '\n';

  Employee Hillary(22,15,90000);
  std::cout << Hillary.getAge() << '\n';
  std::cout << Hillary.getYearOfService() << '\n';
  std::cout << Hillary.getSalary() << '\n';
  return 0;
}
