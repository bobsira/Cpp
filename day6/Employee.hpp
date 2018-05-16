#include <iostream>
class Employee {
private:
  int itsAge;
  int itsYearsOfService;
  int itsSalary;

public:
  Employee ();
  virtual ~Employee ();
  void setAge(int age){ itsAge=age;}
  int getAge() const{ return itsAge;}
  void setYearOfService(int yearOfService){itsYearsOfService=yearOfService;}
  int getYearOfService() const{return itsYearsOfService;}
  void setSalary(int salary){itsSalary=salary;}
  int getSalary()const{return itsSalary;}
  void reportSalaryDetails();
  Employee(int age, int yearOfService, int salary);
};
