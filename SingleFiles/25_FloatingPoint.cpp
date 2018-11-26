#include <iostream>
#include <iomanip>

int main()
{
    double d1(5000.0);
    double d2(5e3);

    double d3(0.05);
    double d4(05e-2);

    std::cout << d1 << std::endl;
    std::cout << d2 << std::endl;
    std::cout << d3 << std::endl;
    std::cout << d4 << std::endl;

    //setprecision for output
    float f = 3.3333333333333333333333333333333333333333f;
    double d = 3.333333333333333333333333333333333333333;

    std::cout << f << std::endl;
    std::cout << d << std::endl;

    std::cout << std::setprecision(16);
    std::cout << f << std::endl; //float has only 7 digits of precision, we will loose some precision!
    std::cout << d << std::endl;

    double dd(0.1);   // converted to binary is a infinite sequence 1/10
    std::cout << dd << std::endl; // use default cout precision of 6
    std::cout << std::setprecision(17);
    std::cout << dd << std::endl;

    double dd1(1.0);
    std::cout << dd1 << std::endl;
	
    double dd2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1); // should equal 1.0, but isn't!
    std::cout << dd2 << std::endl;

    std::cout << (dd1 == dd2) << std::endl;

    // INF and NaN
    double zero = 0.0;
    double posinf = 5.0 / zero; // positive infinity
    std::cout << posinf << std::endl;
 
    double neginf = -5.0 / zero; // negative infinity
    std::cout << neginf << std::endl;
 
    double nan = zero / zero; // not a number (mathematically invalid)
    std::cout << nan << std::endl;

    return 0;
}