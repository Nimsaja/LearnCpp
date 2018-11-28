#include <iostream>

// Variables declared outside of a functin are global variables
int g_x;
const int g_y(2);
int value(5);

static int g_b; // g_b is static, and can only be used within this file
extern double g_t; // g_t is external, and can be used by other files
//Note: those other files will need to use a forward declaration to access this external variable

//By default non-const global variables have external linkage! Use static to keep them internal.
//By default const global variables have internal linkage! Use extern to make them external

// Uninitialized definition:
int g_x;        // defines uninitialized global variable (external linkage)
static int g_x; // defines uninitialized static variable (internal linkage)
const int g_x;  // not allowed: const variables must be initialized
 
// Forward declaration via extern keyword:
extern int g_z;       // forward declaration for global variable defined elsewhere
extern const int g_z2; // forward declaration for const global variable defined elsewhere
 
// Initialized definition:
int g_y(1);        // defines initialized global variable (external linkage)
static int g_y(1); // defines initialized static variable (internal linkage)
const int g_y(1);  // defines initialized const variable (internal linkage)
 
// Initialized definition w/extern keyword:
extern int g_w(1);       // defines initialized global variable (external linkage, extern keyword is redundant in this case)
extern const int g_w(1); // defines initialized const global variable (external linkage)

void doSomething()
{
    // global variables can be seen and used everywhere in the program
    g_x = 3;
    std::cout << g_y << "\n";
}

int main()
{
    doSomething();

    // global variables can be seen and used everywhere in the program
    g_x = 5;
    std::cout << g_y << "\n";

    int value = 7; // hides the global variable value
    value++; // increments local value, not global value
    ::value--; // decrements global value, not local value

    std::cout << "global value " << ::value << "\n";
    std::cout << "local value " << value << "\n";
    
    return 0;
}