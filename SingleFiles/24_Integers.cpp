#include <iostream>

int main()
{
    unsigned short x = 65535; // largest 16-bit unsigned value possible
    
    std::cout << "x was: " << x << std::endl;

    x = x + 1;
    std::cout << "x is now: " << x << std::endl;

    x = 0;
    std::cout << "\nx was: " << x << std::endl;

    x = x - 1;
    std::cout << "x is now: " << x << std::endl;

    std::cout << "\n" << 8/5 << std::endl; // returns 1!!!


    return 0;
}