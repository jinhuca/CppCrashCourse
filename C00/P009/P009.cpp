// P09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <memory>
#include <iostream>

struct Foundation
{
  const char* founder;
};

struct Mutant
{
  // Constructor sets foundation appropriately:
  Mutant(std::unique_ptr<Foundation> foundation)
    : foundation(std::move(foundation)) {}

  std::unique_ptr<Foundation> foundation;
};

int main()
{
  std::unique_ptr<Foundation> second_foundation { new Foundation{} };
  Mutant the_mule { std::move(second_foundation) };
}
