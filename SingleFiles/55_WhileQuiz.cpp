#include <iostream>

void quiz2()
{
  char c = 'a';
  while (c <= 'z')
  {
    int ascii = static_cast<int>(c);

    std::cout << c << " , " << ascii << " | ";

    if ((ascii - static_cast<int>('a')+1) %13 == 0)
    {
      std::cout << "\n";
    }
    ++c;
  }
}

void quiz3()
{
  int count = 5;

  while (count > 0)
  {
    int inner = count;

    while (inner > 0)
    {
      std::cout << inner << " "; 
      --inner;
    }
    std::cout << "\n";
    --count;
  }
}

void quiz4()
{
  int count = 1;

  while (count <= 5)
  {
    int inner = count;

    int diff = 5 - count;
    while (diff > 0)
    {
      std::cout << "  ";
      --diff;
    }

    while (inner > 0)
    {
      std::cout << inner << " "; 
      --inner;
    }
    std::cout << "\n";
    ++count;
  }
}

int main()
{
  // quiz2();
  // quiz3();
  quiz4();

  return 0;
}