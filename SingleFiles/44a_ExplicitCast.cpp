#include <iostream>

int main()
{
    int i1 = 10;
    int i2 = 4;

    // c-style casts - should be avoided because they are not checked at compile time!!!!
    float f = (float)i1 / i2;
    std::cout << f << "\n";

    f = float(i1) / i2;
    std::cout << f << "\n";

    // use static_cast instead
    f = static_cast<float>(i1) / i2;
    std::cout << f << "\n";

    return 0;
}