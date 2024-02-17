// P02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

struct HolmesIV
{
  bool is_sentient;
  int sense_of_humor_rating;
};

void make_sentient(HolmesIV* mike)
{
  if(mike == nullptr) return;
  mike->is_sentient = true;
}

void make_sentient(HolmesIV& mike)
{
  mike.is_sentient = true;
}

int main()
{
  HolmesIV h1 {};
  HolmesIV& rh1 = h1;
  make_sentient(rh1);
  std::cout << rh1.is_sentient << std::endl;

  HolmesIV h2 {};
  HolmesIV* ph2 = &h2;
  make_sentient(ph2);
  std::cout << ph2->is_sentient << std::endl;
}
