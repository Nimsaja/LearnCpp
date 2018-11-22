#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int a;
    std::cin >> a;
    
    return a;
}

int doubleNumber(int x)
{
    return 2*x;
}

int main()
{
    int x = getValueFromUser();

    std::cout << "double of " << x << ": " << doubleNumber(x) << std::endl;

    return 0;
}