#include <iostream>
#include <random>
#include <functional>

int generateRandomNumber()
{
  std::mt19937::result_type seed = time(0);

  auto nb_rand = std::bind(std::uniform_int_distribution<int>(0, 100), std::mt19937(seed));

  return nb_rand();
}

int getUserGuess(int i)
{
  int x;

  std::cout << "Guess #" << i << ": ";
  std::cin >> x;

  return x;
}

bool play()
{
  char a = ' ';

  while (a != 'y' && a != 'n') {
    std::cout << "Would you like to play again (y/n)? ";
    std::cin >> a;
  }

  return a == 'y';
}

int main()
{

  do
  {
    std::cout << "Let's play a game. I'm thinking of a number. You have 7 tries to guess what it is.\n";

    int rand = generateRandomNumber();

    int x;
    for (int i = 1; i <= 7; i++)
    {
      x = getUserGuess(i);

      if (x > rand)
      {
        std::cout << "Your guess is too high.\n";
      }
      else if (x < rand)
      {
        std::cout << "Your guess is too low.\n";
      }
      else if (x == rand)
      {
        std::cout << "Correct! You win!\n";
        break;
      }

      if (i == 7)
      {
        std::cout << "Sorry, you lose. The correct number was " << rand << ".\n";
      }
    }
  } while (play());

  return 0;
}