// P028.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <cstdio>

int absolute_value(int x)
{
  int result = 0;
  if(x >= 0)
  {
    result = x;
  }
  else
  {
    result = x * -1;
  }
  return result;
}

int main()
{
  constexpr int my_num = -10;
  printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
}
