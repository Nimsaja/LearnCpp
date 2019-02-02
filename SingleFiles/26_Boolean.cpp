#include <iostream>

bool isEqual(int x, int y)
{
    return x == y;
}

int main()
{
    std::cout << true << std::endl;
    std::cout << false << std::endl;

    std::cout << std::boolalpha; // print bools as true or false

    std::cout << true << std::endl;
    std::cout << false << std::endl;

    //if conditions
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y;
    std::cin >> y;

    if (isEqual(x, y))
        std::cout << x << " and " << y << " are equal" << std::endl;
    else
        std::cout << x << " and " << y << " are not equal" << std::endl;

    if (4) // non-nonsensical, but for the sake of example...
        std::cout << "hi";  //will print hi has 4 is not zero
    else
        std::cout << "bye";

    return 0;
}