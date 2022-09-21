#include "Employee.h"

Employee::Employee(const std::string& first_name, const std::string& second_name,
  const std::string& position, const unsigned age) :
  first_name_(first_name), second_name_(second_name), position_(position), age_(age)
{
  std::cout << "Employee " << first_name_ << " " << second_name_ << "\n";
}

Employee::~Employee()
{
  std::cout << "Destruct employee: " << first_name_ << "\n";
}

void Employee::DoWork()
{
  std::cout << "Employee " << first_name_ << " " << second_name_ << " do work\n";
}
