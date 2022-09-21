#include "TempEmployee.h"

TempEmployee::TempEmployee(const std::string& first_name, const std::string& second_name,
  const std::string& position, unsigned age, int day) :
  Employee(first_name, second_name, "Temp employee", age), day_(day)
{
  std::cout << "TempEmployee " << day_ << "\n";
}

void TempEmployee::DoWork()
{
  std::cout << "TempEmployee " << first_name_ << " " << second_name_ << " do work\n";
}