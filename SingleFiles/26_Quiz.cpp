#include <iostream>

bool isPrime(int p) {
    return (p==2 || p==3 || p==5 || p==7); 
}

int main()
{
    std::cout << "Enter a single digit number: ";
    int p;
    std::cin >> p;

    bool b = isPrime(p);

    if (b)
        std::cout << p << " is a prime number" << std::endl;
    else
        std::cout << p << " is not a prime number (or > 9)" << std::endl;

    return 0;
}