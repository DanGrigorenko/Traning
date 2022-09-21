#include "Manager.h"

#include <iostream>

#include "Project.h"

Manager::Manager(const std::string& first_name, const std::string& second_name,
  unsigned age, Project* project) :
  Employee(first_name, second_name, "Manager", age), project_(project)
{
  std::cout << "Manager " << project_->customer << "(" << project_->name << ")\n";
}

Manager::~Manager()
{
  if (nullptr != project_)
    std::cout << "Destruct manager: " << project_->customer << "\n";
  else
    std::cout << "Destruct manager without customer\n";
}

void Manager::CallToCustomer()
{
  if (nullptr != project_)
    std::cout << "Manager " << first_name_ << " calls to customer: " << project_->customer << "\n";
}

void Manager::DoWork()
{
  Employee::DoWork();
  std::cout << "Manager " << first_name_ << " " << second_name_ << " do work\n";
}
