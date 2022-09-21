#pragma once

#include "Manager.h"
#include "TempEmployee.h"

class Consultant : 
  public Manager,
  public TempEmployee
{
public:
  Consultant(const std::string& first_name, const std::string& second_name,
    unsigned age, Project* project, int day);
};

