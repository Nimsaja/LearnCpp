#include <iostream>

void allocateSingleVariable()
{
  int *ptr = new int; // dynamically allocate an integer and assign the address to ptr so we can access it later

  *ptr = 7; // assign value of 7 to allocated memory
  std::cout << *ptr << '\n';

  *ptr = 17; // assign value of 17 to allocated memory
  std::cout << *ptr << '\n';
}

void initializeSingleVariable()
{
  int *ptr1 = new int (5);
  int *ptr2 = new int { 6 };

  std::cout << *ptr1 << '\n';
  std::cout << *ptr2 << '\n';
}

int main()
{
  // allocateSingleVariable();
  initializeSingleVariable();
 
  return 0;
}