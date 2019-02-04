#include <iostream>

void assignNullP()
{
  float *ptr { 0 }; // ptr is now a null pointer

  float *ptr2; // ptr2 is uninitialized
  ptr = 0; // ptr2 is now a null pointer

  // Pointers convert to boolean false if they are null, and boolean true if they are non-null
  if (ptr)
  {
    std::cout << "ptr is pointing to a float value." << "\n";
  }
  else
  {
    std::cout << "ptr is a null pointer." << "\n";
  }

  // c++11
  int *x { nullptr};
}


int main()
{
  assignNullP();
 
  return 0;
}