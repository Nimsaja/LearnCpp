#include <iostream>

// void printValue(int nValue)
// {
//     std::cout << nValue << std::endl;
// }

// int main()
// {
//     printValue(5);
//     return 0;
// }

// int main()
// {
//     int x = 1;
//     std::cout << x << std::endl;
    
//     x = x + 1;
//     std::cout << x << std::endl;

//     x = x + 2;
//     std::cout << x << std::endl;

//     x = x + 4;
//     std::cout << x << std::endl;

//     return 0;
// }

void CallC()
{
    std::cout << "C called" << std::endl;
}

void CallB()
{
    std::cout << "B called" << std::endl;
    CallC();
}

void CallA()
{
    CallB();
    CallC();
}

int main()
{
    CallA();

    return 0;
}