#pragma once

#include "Employee.h"

struct Project;

class Manager : 
  virtual public Employee
{
  using Employee::Employee;
public:

  Manager(Project* project) : project_(project) {};
  Manager(const std::string& first_name, const std::string& second_name,
    unsigned age, Project* project);
  ~Manager();

  void DoWork();
  void CallToCustomer();

private:
  Project* project_ = nullptr;
};


class President : public Manager
{
  void Func()
  {
    DoWork();
    std::cout << first_name_;
  }
};
