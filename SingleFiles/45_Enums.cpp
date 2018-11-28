#include <iostream>

enum class Color
{
    BLACK,
    BLUE,
    GREEN,
};

enum Monster
{
    ORC,
    GOBLIN,
    TROLL,
    ORGRE,
    SKELETON,
};

int main()
{
    Color paint = Color::BLACK;
    Color house(Color::BLUE);
    Color apple{Color::GREEN};

    std::cout << static_cast<int>(paint) << "\n";

    Monster myMonster = TROLL;

    return 0;
}