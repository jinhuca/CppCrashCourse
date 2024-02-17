// P04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <iostream>
#include <iostream>
#include <algorithm>

int main()
{
  std::vector<int> x { 0, 1, 8, 13, 5, 2, 3 };
  x[0] = 21;
  x.push_back(1);
  std::sort(x.begin(), x.end());
  std::cout << "Printing " << x.size() << "Fibonacci numbers.\n";
  for(auto number : x)
    std::cout << number << std::endl;

  auto n_evens = std::count_if(x.begin(), x.end(),
    [](auto number) { return number % 2 == 0; });

  std::cout << n_evens << std::endl;
}
