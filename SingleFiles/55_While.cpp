#include <iostream>

void print0to9()
{
  int count = 0;
  
  while(count < 10)
  {
    std::cout << count << " ";
    ++count;
  }
  std::cout << "done!\n";
}

void variableScope()
{
  int count = 1;
  int sum = 0;  // sum is declared up here because we need it later (beyond the loop)

  while (count <= 5) // iterate 5 times
  {
    int x; // x is created here with each iteration (fine for fundamental variables, declare once for structs and classes!!)

    std::cout << "Enter integer #" << count << ':';
    std::cin >> x;

    sum += x;

    // increment the loop counter
    ++count;
  } // x is destroyed here with each iteration

  std::cout << "The sum of all numbers entered is: " << sum << "\n";
}

int main()
{
  // print0to9();

  variableScope();

  return 0;
}