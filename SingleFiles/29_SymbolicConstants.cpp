#include <iostream>

namespace constants  //should probably be put into a header file to be used all over the program
{
    constexpr double pi(3.14);
    //...
}

//function will not change the value
void printInteger(const int myValue)
{
    std::cout << myValue << std::endl; //myValue is a runtime constant as the compiler can't determine its value at compile time
}

int main()
{
    const double gravity{9.8}; //compile time constants
    const int sidesInSquare{4}; // --

    //new keyword in c++11 for compile-time constant -> should be used!
    constexpr double gravity2{9.8};
    constexpr int sum = 4 + 5;

    std::cout << gravity << std::endl;
    std::cout << sidesInSquare << std::endl;
    std::cout << gravity2 << std::endl;
    std::cout << sum << std::endl;

    printInteger(17);

    double circumference = 2 * 14 * constants::pi;
    std::cout << circumference << std::endl;

    return 0;
}