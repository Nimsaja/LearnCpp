#include <iostream>

//x inside function is a copy of x
int test(int x) {
    x = 2*x;

    return x;
}

//*x inside function is NOT a copy of x
int test2(int * x) {
    *x = 2* *x;

    return *x;
}

int main()
{
    int x = 17;

    std::cout << "x: " << x << std::endl;
    std::cout << "call test " << test(x) << std::endl;
    std::cout << "-> x: " << x << std::endl; //x is still 17

    int * y;
    y = &x;

    std::cout << "y: " << *y << std::endl;
    std::cout << "call test " << test(*y) << std::endl;
    std::cout << "-> y: " << *y << std::endl; //y is still 17

    std::cout << "y: " << *y << std::endl;
    std::cout << "call test " << test2(y) << std::endl;
    std::cout << "-> y: " << *y << std::endl; //y is 34!!!!
    std::cout << "-> x: " << x << std::endl; //x is also 34!!!!
}