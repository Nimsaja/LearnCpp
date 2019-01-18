#include <iostream>

void averageScore()
{
  int scores[] = { 84, 92, 76, 81, 56 };
  const int numStudents = sizeof(scores) / sizeof(scores[0]); // sizeof calculates size in byte!

  int totalScore = 0;
  for (int student = 0; student < numStudents; ++student)
  {
    totalScore += scores[student];
  }

  double averageScore = static_cast<double>(totalScore) / numStudents;

  std::cout << averageScore << "\n";
}

void quiz()
{
  int array[] = { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
  const int length = sizeof(array) / sizeof(array[0]);

  int nb;
  while(true)
  {
    std::cout << "Enter nb between 1 and 9: ";
    std::cin >> nb;
    if (std::cin.fail())
    {
      std::cin.clear();
      std::cin.ignore(32767, '\n');
    }
    if (nb > 0 && nb <= 9) {
      break;
    }
  }

  for (int i=0; i < length; i++)
  {
    std::cout << array[i] << "\n";
  }

  int index;
  for (int i=0; i < length; i++)
  {
    if (nb == array[i])
    {
      index = i;
      break;
    }
  }

  std::cout << nb << " -> " << index << "\n";
}

void quiz2()
{
  int scores[] = { 84, 92, 76, 81, 56 };
  const int numStudents = sizeof(scores) / sizeof(scores[0]);
 
    int maxIndex = 0; // keep track of our largest score
 
    // now look for a larger score
    for (int student = 0; student < numStudents; ++student)
        if (scores[student] > scores[maxIndex])
        {
            maxIndex = student;
        }    
 
    std::cout << "The best score was " << scores[maxIndex] << '\n';
}

int main()
{
  // averageScore();
  // quiz();
  quiz2();

  return 0;
}