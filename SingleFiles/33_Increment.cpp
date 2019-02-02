#include <iostream>

void assignment1() //prefer this one
{
    int x = 5;
    int y = ++x;

    std::cout << "x, y " << x << ", " << y << "\n";
}

void assignment2()
{
    int x = 5;
    int y = x++;

    std::cout << "x, y " << x << ", " << y << "\n";
}

void prefixPostfix()
{
    int x = 5, y = 5;
    std::cout << x << " " << y << '\n';
    std::cout << ++x << " " << --y << '\n'; // prefix
    std::cout << x << " " << y << '\n';
    std::cout << x++ << " " << y-- << '\n'; // postfix
    std::cout << x << " " << y << '\n';
}

int main()
{
    // assignment1();
    // assignment2();

    prefixPostfix();
}