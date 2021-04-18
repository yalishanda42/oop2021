#include "Upgradeable.hpp"

Upgradeable::Upgradeable(int startingLevel)
    : level(startingLevel)
{
}

int Upgradeable::getLevel() const
{
    return level;
}

void Upgradeable::upgrade()
{
    level++;
}

