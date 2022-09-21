#pragma once

#include "Employee.h"

#include <string>

class TempEmployee : 
  virtual public Employee
{
public:
  TempEmployee(int day) : day_(day) {};
  TempEmployee(const std::string& first_name, const std::string& second_name,
    const std::string& position, unsigned age, int day);

  void DoWork();

private:
  int day_ = 0;
};

