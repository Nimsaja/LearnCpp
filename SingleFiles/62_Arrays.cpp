#include <iostream>

void init()
{
  //Initialization
  int a[5] = { 2, 3, 5, 7, 11}; // use intializer list to initialize the fixed array
  //int a[5] { 2, 3, 5, 7, 11}; // uniform initialization syntax
  //int a[] = { 2, 3, 5, 7, 11}; // compiler will calculate the length

  int b[5] = { 7, 4, 5};

  for (int i=0; i<5; i++)
  {
    std::cout << a[i] << " / " << b[i] << "\n";
  }
}

void passValue(int value) // value is a copy of the argument
{
  value = 99; // so changing it here won't change the value of the argument
}

void passArray(int prime[5]) // prime is the actual array
{
  prime[0] = 11; // so changing it here will change the original argument!
  prime[1] = 7;
  prime[2] = 5;
  prime[3] = 3;
  prime[4] = 2;
}

void passing()
{
  int value = 1;
  std::cout << "before passValue: " << value << "\n";
  passValue(value);
  std::cout << "after passValue: " << value << "\n";

  int prime[] = { 2, 3, 5, 7, 11};
  std::cout << "before passArray: " << prime[0] << " " << prime[1] << " " << prime[2] << " " << prime[3] << " "
    << prime[4] << "\n";
  passArray(prime);
  std::cout << "after passArray: " << prime[0] << " " << prime[1] << " " << prime[2] << " " << prime[3] << " "
    << prime[4] << "\n";
}    

void quiz1()
{
  double temp[365] = {};
  std::cout << temp[0] << "\n";
}

int main()
{
  // init();
  // passing();
  quiz1();

  return 0;
}