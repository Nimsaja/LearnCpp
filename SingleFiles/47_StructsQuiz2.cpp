#include <iostream>

struct Fraction
{
  int numerator;
  int denumerator;
};

Fraction readInFraction()
{
  Fraction f;
  std::cout << "Enter Numerator: ";
  std::cin >> f.numerator;

  std::cout << "Enter Denumerator: ";
  std::cin >> f.denumerator;

  return f;
}

void multiply(Fraction f1, Fraction f2)
{
  std::cout << "-> " << static_cast<double>(f1.numerator * f2.numerator) / (f1.denumerator * f2.denumerator) << "\n";
}

int main()
{
  Fraction f1 = readInFraction();
  Fraction f2 = readInFraction();
  multiply(f1, f2);

  return 0;
}