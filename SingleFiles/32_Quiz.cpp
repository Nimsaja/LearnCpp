#include <iostream>

bool isEven(int x)
{
    return (x%2) == 0;
}

int getNumber()
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;

    return x;
}

int main()
{
    int x = getNumber();
    bool b = isEven(x);

    if (b)
        std::cout << x << " is a even number \n";
    else    
        std::cout << x << " is a uneven number \n";

}
