#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;

    std::cout << "Enter a larger integer: ";
    int y;
    std::cin >> y;

    if (y < x)
    {
        int l(x);
        x = y;
        y = l;

        //l dies here
    }

    std::cout << "The smaller value is " << x << "\n";
    std::cout << "The larger value is " << y << "\n";

    //x and y are dying here
}