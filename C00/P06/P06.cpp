// P06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cstdio>

struct Hal
{
  Hal() :version { 9000 }
  {
    printf("I'm completely operational.\n");
  }
  ~Hal()
  {
    printf("Stop, Dave.\n");
  }
  const int version;
};

int main()
{
  Hal h {};
  const auto hal = new Hal {};
  delete hal;
}
