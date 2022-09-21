  #pragma once

#include <iostream>
#include <string>
#include <vector>

class Employee
{
public:
  Employee() = default;
  Employee(const std::string& first_name, const std::string& second_name,
    const std::string& position, unsigned age);
  ~Employee();

  void Print() const;
  void DoWork();

protected:
  std::string first_name_;
  std::string second_name_;

private:
  std::string position_;
  unsigned age_ = 0;
};
