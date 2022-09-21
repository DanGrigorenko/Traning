#include "Consultant.h"

Consultant::Consultant(const std::string& first_name, const std::string& second_name,
  unsigned age, Project* project, int day) :
  Employee(first_name, second_name, "Consultant", age),
  Manager(project),
  TempEmployee(day)
{
  std::cout << "Consultant\n";
}
