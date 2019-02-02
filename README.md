# LearnCpp
Learncpp.com online training

g++ -pedantic-errors -Wall -Weffc++ -Wextra -Wsign-conversion -o HelloWorld HelloWorld.cpp

-pedantic-errors : when code is not standard c++
-Wall -Weffc++ -Wextra -Wsign-conversion : increase warning levels

Include other "search directories" for header files

g++ -o main -I /source/includes main.cpp

g++ -std=gnu++11 ... -> use c++11
