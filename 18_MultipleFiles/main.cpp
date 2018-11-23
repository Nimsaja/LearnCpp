#include <iostream>

int add(int x, int y); //to let the compiler now there is (somewhere) a add function in another file

int main()
{
    std::cout<< "The sum of 3 and 4 is: " << add(3,4) << std::endl;
    return 0;
}