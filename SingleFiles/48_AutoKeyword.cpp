#include <iostream>

int add(int x, int y)
{
  return x + y;
}

int main()
{
  auto d = 5.0; // 5.0 is a double literal, so d will be type double
  auto i = 1 + 2; // 1 + 2 evaluates to an integer, so i will be type int

  auto sum = add(5, 6);

  return 0;
}