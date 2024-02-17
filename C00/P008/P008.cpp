// P08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <memory>
#include <iostream>

struct Foundation
{
  const char* founder;
};

int main()
{
  std::unique_ptr<Foundation> second_foundation { new Foundation{} };
  // Access founder member variable just like a pointer:
  second_foundation->founder = "Wanda";
}
