#include <iostream>

int main()
{
    int x = 5;
    int y = 7;

    if ((x > 1) && (x < 7))
         std::cout << "((x > 1) && (x < 7)) is true \n";

    if (!((x < 1) && (y > 8)))
        std::cout << "(!((x < 1) && (y > 8))) is true \n";

    //is the same as
    if (!(x < 1) || !(y > 8))
         std::cout << "(!(x < 1) || !(y > 8)) is true \n";

    //logical XOR operator
    if ( (2 == 2) != (4 == 4) )
        std::cout << "is not printed!! \n"; //only if one argument is true!

    if ( (2 == 2) != (3 == 4) )
        std::cout << "is printed!! \n";

    return 0;
}