#include <iostream>

enum class Colors
{
  BLACK,
  WHITE,
  RED,
  GREEN,
  BLUE,
};

enum class Animal
{
  PIG,
  CHICKEN,
  GOAT,
  CAT,
  DOG,
  OSTRICH,
};

void printColor(Colors color)
{
  switch (color)
  {
    case Colors::BLACK:
      std::cout << "Black \n";
      break;
    case Colors::WHITE:
      std::cout << "White \n";
      break;
    case Colors::RED:
      std::cout << "Red \n";
      break;
    case Colors::GREEN:
      std::cout << "Green \n";
      break;
    case Colors::BLUE:
      std::cout << "Blue \n";
      break;
    default:
      std::cout << "Unknown \n";
      break;
  }
}

void calculate(int x, int y, char o)
{
  int r;

  switch(o)
  {
    case '+':
      r = x + y;
      break;
    case '-':
      r = x - y;
      break;  
    case '*':
      r = x * y;
      break;  
    case '/':
      r = x / y;
      break;  
    default:
      std::cout << "Error \n";
      return;  
  }

  std::cout << x << o << y << " = " << r << "\n";
}

std::string getAnimalName(Animal animal)
{
  switch (animal)
  {
    case Animal::PIG:
      return "pig";
    case Animal::CHICKEN:
      return "chicken";
    case Animal::GOAT:
      return "goat";
    case Animal::CAT:
      return "cat";
    case Animal::DOG:
      return "dog";
    case Animal::OSTRICH:
      return "ostrich";
    default:
      return "No Animal found!";
  }
}

void printNumberOfLegs(Animal animal)
{
  int legs;

  switch (animal)
  {
    case Animal::PIG:
    case Animal::GOAT:
    case Animal::CAT:
    case Animal::DOG:
      legs = 4;
      break;
    case Animal::CHICKEN:
    case Animal::OSTRICH:
      legs = 2;
      break;
    default:
      std::cout << "Error \n";
      return;  
  }

  std::cout << "A " << getAnimalName(animal) << " has " << legs << " legs\n";
}

int main()
{
  // printColor(Colors::GREEN);

  // calculate(2, 2, '+');
  // calculate(2, 2, '-');
  // calculate(2, 3, '*');
  // calculate(6, 3, '/');
  // calculate(6, 3, '.');

  Animal cat = Animal::CAT;
  printNumberOfLegs(cat);
  Animal chicken = Animal::CHICKEN;
  printNumberOfLegs(chicken);

  return 0;
}