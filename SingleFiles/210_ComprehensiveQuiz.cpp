#include <iostream>

double getValue()
{
    std::cout << "Enter a double value: ";
    double x;
    std::cin >> x;

    return x;
}

char getArithmeticSymbol() {
    std::cout << "Enter one of the following: +, -, *, or / :";
    char s;
    std::cin >> s;

    return s;
}

void calculateAndPrintAnswer(double a, double b, char s)
{
    double c;

    if (s == '+')
        c = a + b;
    else if (s == '-')
        c = a - b;
    else if (s == '*')
        c = a * b;
    else if (s == '/')
        c = a / b;
    else
    {
        std::cout << "Invalid Operator!" << std::endl;
        return;
    }

    std::cout << a << " " << s << " " << b << " = " <<  c << std::endl;
}

int main()
{
    double a = getValue();
    double b = getValue();
    char s = getArithmeticSymbol();

    calculateAndPrintAnswer(a, b, s);

    return 0;
}