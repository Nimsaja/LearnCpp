#include <iostream>

struct Employee
{
  short id;
  int age;
  double wage;
};

struct Company
{
  Employee CEO;
  int numberOfEmployees;
};

void testA()
{
  Employee joe;
  joe.id = 14;
  joe.age = 32;
  joe.wage = 24.15;

  Employee frank;
  frank.id = 15;
  frank.age = 28;
  frank.wage = 18.27;

  int totalAge = joe.age + frank.age;
  std::cout << "Total Age: " << totalAge << "\n";

  if (joe.wage > frank.wage)
  {
    std::cout << "Joe makes more than Frank\n";
  }
  else if (joe.wage < frank.wage)
  {
    std::cout << "Joe makes less than Frank\n";
  }
  else
  {
    std::cout << "Joe and Frank make the same amount\n";
  }

  //Frank got a promotion
  frank.wage += 2.50;

  //Today is Joe's birthday
  ++joe.age;
}

void initStructs()
{
  Employee joe = {1, 32, 60000.0};
  Employee frank = {2, 28, 0.0}; 

  std::cout << joe.age << "\n";
  std::cout << frank.wage << "\n";
}

void initStructs2()
{
  Employee joe {1, 32, 60000.0};
  Employee frank {2, 28, 0.0};

  std::cout << joe.age << "\n";
  std::cout << frank.wage << "\n";
}

void assign()
{
  Employee joe;
  joe = {1, 32, 60000.0};

  std::cout << joe.id << "\n";
}

void printInformation(Employee e)
{
  std::cout << "ID  : " << e.id << "\n";
  std::cout << "Age : " << e.age << "\n";
  std::cout << "Wage: " << e.wage << "\n";
}

int main()
{
  // testA();
  // initStructs();
  // initStructs2();
  // assign();

  Employee joe;
  joe = {1, 32, 60000.0};
  printInformation(joe);

  Company myCompany = {{1, 42, 60000.0}, 5};

  return 0;
}