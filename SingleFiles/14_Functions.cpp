#include <iostream>

//needs to be before main()!!
void doPrint()
{
    std::cout << "in doPrint()" << std::endl;
}

int return5()
{
    return 5;
}

int main()
{
    std::cout<< "Starting main()" << std::endl;

    doPrint();

    std::cout << return5() << std::endl;
    std::cout << return5() +2 << std::endl;

    return5(); //is ignored

    std::cout << "Ending main()" << std::endl;

    return 0;
}