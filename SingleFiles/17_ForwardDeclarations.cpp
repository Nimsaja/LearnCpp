#include <iostream>

int add(int, int); //function prototype / int add(int x, int y); / int add(int a, int b);

int main()
{
    std::cout << "The sum of 3 and 4 is: "<< add(3, 4) << std::endl;

    return 0;
}

int add(int x, int y)
{
    return x + y;
}