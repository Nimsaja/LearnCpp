#include <iostream>

void cleanup()
{
  std::cout << "do cleanup \n";
}

void halt()
{
  std::cout << 1 << "\n";
  cleanup();

  exit(0); // terminate and return 0 to operating system

  // this is never executed
  std::cout << 2 << "\n";
}

int main()
{
  halt();

  return 0;
}