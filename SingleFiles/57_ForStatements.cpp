#include <iostream>

void loopWithComma()
{
  for (int iii=0, jjj=9; iii < 10; ++iii, --jjj)
  {
    std::cout << iii << " " << jjj << "\n";
  }
}

void loopEvenNumbers(int max)
{
  for (int i = 0; i <= max; i+=2)
  {
    std::cout << i << "\n";
  }
}

int sumTo(int value)
{
  int result = 0;
  for (int i = 0; i <= value; i++)
  {
    result += i;
  }

  return result;
}



int main()
{
  // loopWithComma();

  // loopEvenNumbers(20);

  int result = sumTo(5);
  std::cout << "Sum up to " << 5 << " is " << result << "\n";

  return 0;
}