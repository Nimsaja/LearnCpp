#include <iostream>

void arraysInExpression()
{
  int array[5] = { 9, 7, 5, 3, 1 };

  // print address of the array's first element
  std::cout << "Element 0 has address: " << &array[0] << '\n';

  // print the value of the pointer the array decays to
  std::cout << "The array decays to a pointer holding address: " << array << '\n';
}

void dereferenceArray()
{
  int array[5] = { 9, 7, 5, 3, 1 };
  
  // dereferencing an array returns the first element (element 0)
  std::cout << *array << '\n';

  char name[] = "Jason"; // C-Style string (also an array)
  std::cout << *name << '\n'; // will print 'J'
}

void printSize(int *array)
{
  // array is treated as a pointer here
  std::cout << sizeof(array) << '\n'; // prints the size of a pointer, not the size of the array!
}

void printSize2(int array[])
{
  // array is treated as a pointer here
  std::cout << sizeof(array) << '\n'; // prints the size of a pointer, not the size of the array!
}

void passToFct()
{
  int array[] = { 1, 1, 2, 3, 5, 8, 13, 21 };
  std::cout << sizeof(array) << '\n'; // will print sizeof(int) * array length

  printSize(array); // the array argument decays into a pointer here
  printSize2(array); // the array argument decays into a pointer here - the same as printSize()
}

int main()
{
  // arraysInExpression();
  // dereferenceArray();
  passToFct();
 
  return 0;
}