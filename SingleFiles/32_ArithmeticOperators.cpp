#include <iostream>
#include <cmath>

void staticCast()
{
    int x = 7;
    int y = 4;

    std::cout << "int/int \t = \t" << x / y << "\n";
    std::cout << "double/int \t = \t" << static_cast<double>(x) / y << "\n";
    std::cout << "int/double \t = \t" << x / static_cast<double>(y) << "\n";
    std::cout << "double/double \t = \t" << static_cast<double>(x) / static_cast<double>(y) << "\n";
}

void modulus()
{
    // count holds the current number to print
    int count = 1; // start at 1

    // Loop continually until we pass number 100
    while (count <= 100)
    {
        std::cout << count << " "; // print the current number

        // if count is evenly divisible by 20, print a new line
        if (count % 20 == 0)
            std::cout << "\n";

        count++; // go to next number
    }

}

void negativeNumbers()
{
    std::cout << -5/2 << "\n"; // -2
    std::cout << -5 % 2 << "\n"; // -1
}

void arithmeticAssignmentOperators()
{
    int x = 5;

    x += 2; //7
    std::cout << x << "\n";

    x -= 5; //2
    std::cout << x << "\n";

    x *= 6; //12
    std::cout << x << "\n";

    x /= 4; //3
    std::cout << x << "\n";

    x %= 2; //1
    std::cout << x << "\n";
}

void power()
{
    std::cout << std::pow(3.0, 2.0) << "\n";
}

int main()
{
    // staticCast();
    // modulus();
    // negativeNumbers();
    // arithmeticAssignmentOperators();
    power();

    return 0;
}
