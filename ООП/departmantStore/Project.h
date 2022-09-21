#pragma once

#include <string>

struct Project
{
  Project(const std::string& name, const std::string& customer);

  std::string name;
  std::string customer;
};

