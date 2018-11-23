#include <iostream>

//directives are only valid in the current file; directives in header files can be included in multiple files

//object-like macro with substitution text
#define MY_FAVORITE_NUMBER 17

//conditional compilation
#define PRINT_JOE

int main()
{
    std::cout << "My favorite number is: " << MY_FAVORITE_NUMBER << std::endl;

//is PRINT_JOE defined?
#ifdef PRINT_JOE
    std::cout << "Joe " << std::endl;
#endif

//is PRINT_BOB defined?
#ifdef PRINT_BOB
    std::cout << "Bob " << std::endl;
#endif

//is PRINT_BOB NOT defined?
#ifndef PRINT_BOB
    std::cout << "Bob! " << std::endl;
#endif

#ifdef MY_FAVORITE_NUMBER  //no replacement with 17 because it's part of another preprocessor directive
    std::cout << "Number: " << MY_FAVORITE_NUMBER << std::endl;
#endif



    return 0;
}
