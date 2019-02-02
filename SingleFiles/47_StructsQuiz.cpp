#include <iostream>

struct Advertising
{
  int nbOfAds;
  double percClicked;
  double earnedAvg;
};

void printInformation(Advertising u)
{
  std::cout << "Number of ads shown to reader: " << u.nbOfAds << "\n";
  std::cout << "Percentage of ads clicked: " << u.percClicked << "\n";
  std::cout << "Averaging earning per click: " << u.earnedAvg << "\n";

  std::cout << "I earned today: " << u.nbOfAds * u.percClicked * u.earnedAvg << "\n";
}

int main()
{
  Advertising user1 {10, 0.5, 0.30};
  Advertising user2 {5, 0.2, 0.10};
  Advertising user3 {2, 0.1, 0.60};

  printInformation(user1);
  printInformation(user2);
  printInformation(user3);
  
  return 0;
}