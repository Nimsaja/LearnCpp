#include <iostream>
#include <typeinfo>

void addressOperator()
{
  int x = 5;
  std::cout << x << '\n'; // print the value of the variable x
  std::cout << &x << '\n'; // print the memory address of variable x
  std::cout << *&x << '\n'; // print the value at the memory address of variable x
}

void pointers()
{
  int value = 5;
  int *ptr = &value; // initialize ptr with address of variable value
  // you can't do int *ptr = 5 -> pointers can only hold address and the integer literal 5 does not have a memory address

  std::cout << &value << '\n'; // print the address of variable value
  std::cout << ptr << '\n'; // print the address that ptr is holding

  int x(4);
  std::cout << typeid(&x).name() << '\n'; // & doesn't return the address of its operand as a literal. Instead, it returns a
   // pointer containing the address of the operand!
  
}

void dereferencing()
{
  int value = 5;
  std::cout << &value << '\n'; // prints address of value
  std::cout << value << '\n'; // prints contents of value
  
  int *ptr = &value; // ptr points to value
  std::cout << ptr << '\n'; // prints address held in ptr, which is &value
  std::cout << *ptr << '\n'; // dereference ptr (get the value that ptr is pointing to)
}

void foo(int *&p)
{
  // p is a reference to a pointer. We're using this to trick the compiler into thinking p could be modified,
  // so it won't complain about p being uninitialized.
  // This isn't something you'll ever want to do intentionally.
}

void invalidMemory()
{
  int *p; // Create an uninitialized pointer (that points to garbage)
  foo(p);

  std::cout << *p << "\n"; // Dereference the garbage pointer
}

int main()
{
  // addressOperator();
  // pointers();
  // dereferencing();
  invalidMemory();

  return 0;
}