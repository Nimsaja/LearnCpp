#include <iostream>

void nextElement()
{
  int array[5] = { 9, 7, 5, 3, 1 };

  std::cout << &array[1] << '\n'; // print memory address of array element 1
  std::cout << array+1 << '\n'; // print memory address of array pointer + 1

  std::cout << array[1] << '\n'; // prints 7
  std::cout << *(array+1) << '\n'; // prints 7 (note the parenthesis required here)

}

int main()
{
  nextElement();
 
  return 0;
}