#include <iostream>
#include <algorithm>

void swap()
{
  int x = 2;
  int y = 4;
  std::cout << "Before swap: x = " << x << ", y = " << y << '\n';
  std::swap(x, y); // swap the values of x an y
  std::cout << "After swap: x = " << x << ", y = " << y << '\n';
}

void sort()
{
  const int length = 5;
  int array[length] = { 30, 50, 20, 10, 40};

  std::sort(array, array+length);

  for (int i=0; i < length; ++i)
  {
    std::cout << array[i] << ' ';
  }
  std::cout << std::endl;
}

void bubbleSort()
{
  const int length(9);
  int array[length] = { 6, 3, 2, 9, 7, 1, 5, 4, 8};

  for (int j = 0; j < (length - 1); j++)
  {
    bool neededSwap = false;

    // perform one bubble sort iteration
    for (int i = 0; i < (length - 1 - j); i++)
    {
      if (array[i] > array[i + 1])
      {
        std::swap(array[i], array[i + 1]);
        neededSwap = true;
      }
    }

    if (!neededSwap)
    {
      std::cout << "Early termination on iteration " << (j+1) << '\n';
      break;
    }
  }

  //result
  for (int i=0; i < length; ++i)
  {
    std::cout << array[i] << ' ';
  }
  std::cout << std::endl;
}

int main()
{
  // swap();
  // sort();

  //quiz
  bubbleSort();

  return 0;
}