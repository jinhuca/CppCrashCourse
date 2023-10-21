// P03.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <cstdio>

typedef struct Jabberwocks
{
  void* tulgey_wood;
  int is_galumphing;
} Jabberwock;

namespace Creature
{
  struct Jabberwock
  {
    void* tulgey_wood;
    int is_galumphing;
  };
}

namespace Func
{
  void Jabberwock()
  {
    printf("Burble!");
  }
}

int main()
{

}
