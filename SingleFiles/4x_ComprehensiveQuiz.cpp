#include <iostream>

enum class MType
{
  OGRE,
  DRAGON,
  ORC,
  GIANT_SPIDER,
  SLIME
};

struct Monster
{
  MType mType;
  std::string name;
  int health;
};

std::string getMonsterTypeAsString(MType t)
{
  if (t == MType::OGRE)
    return "Ogre";
  else if (t == MType::DRAGON)
    return "Dragon";
  else if (t == MType::ORC)
    return "Orc";
  else if (t == MType::GIANT_SPIDER)
    return "Giant Spider";
  else if (t == MType::SLIME)
    return "Slime";
  else
    return "Unknown Species!";
}

void printMonster(Monster m)
{
  std::string monsterTypeString = getMonsterTypeAsString(m.mType);

  std::cout << " This " << monsterTypeString << " is named " << m.name << " and has " << m.health << " health.\n";
}

int main()
{
  Monster ogre {MType::OGRE, "Torg", 145};
  Monster slime {MType::SLIME, "Blurp", 23};

  printMonster(ogre);
  printMonster(slime);
}