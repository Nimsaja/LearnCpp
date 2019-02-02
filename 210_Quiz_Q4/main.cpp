#include <iostream>

#include "myConstants.h"

double getHeightOfTower()
{
    std::cout << "Enter the height of the tower in meters: ";
    double h;
    std::cin >> h;

    return h;
}

double calcFallenDistance(int time)
{
    return myConstants::gravity * time * time / 2;
}

void printOutBallHeight(double r, int time)
{
    if (r > 0)
        std::cout << "At " << time << " seconds, the ball is at height: " << r << " meters" << std::endl;
    else
        std::cout << "At " << time << " seconds, the ball is on the ground" << std::endl;
}

int main()
{
    double h = getHeightOfTower();

    double d;
    double t = 0;
    
    d = calcFallenDistance(t);
    printOutBallHeight(h - d, t);

    t = 1;
    d = calcFallenDistance(t);
    printOutBallHeight(h - d, t);

    t = 2;
    d = calcFallenDistance(t);
    printOutBallHeight(h - d, t);
    
    t = 3;
    d = calcFallenDistance(t);
    printOutBallHeight(h - d, t);
    
    t = 4;
    d = calcFallenDistance(t);
    printOutBallHeight(h - d, t);
    
    t = 5;
    d = calcFallenDistance(t);
    printOutBallHeight(h - d, t);

    return 0;
}

