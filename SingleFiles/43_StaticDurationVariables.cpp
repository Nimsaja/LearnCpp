#include <iostream>

void incrementAndPrint()
{
    static int s_value = 1; // static duration via static keyword. This line is only executed once.
    ++s_value;
    std::cout << s_value << "\n";
} // s_value is NOT destroyed here, but becomes inaccessible

int main()
{
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();

    return 0;
}
