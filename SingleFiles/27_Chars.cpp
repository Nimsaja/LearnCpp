#include <iostream>

void typeCasting()
{
    char ch(97); // even though we're initializing ch with an integer
    std::cout << ch << std::endl; // cout prints a character -> 'a'

    //static cast - fundamental data types
    std::cout << static_cast<int>(ch) << std::endl;
    std::cout << ch << std::endl;
}

void inputtingChars()
{
    std::cout << "Input a keyboard character: ";

    char ch;
    std::cin >> ch;

    std::cout << ch << " has ASCII code " << static_cast<int>(ch) << std::endl;
}

void escapeSquences()
{
    std::cout << "First line\nSecond line" << std::endl;
    std::cout << "First part\tSecond part" << std::endl;

    std::cout << "\"This is quoted text\"\n";
    std::cout << "This string contains a single backslash \\" << std::endl;
    std::cout << "6F in hex is char \'\x6F\'" << std::endl;
}

int main()
{
    // typeCasting();
    // inputtingChars();
    escapeSquences();

    return 0;
}