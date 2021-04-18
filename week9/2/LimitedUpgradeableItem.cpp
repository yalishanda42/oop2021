#include "LimitedUpgradeableItem.hpp"

LimitedUpgradeableItem::LimitedUpgradeableItem(std::string name, int startingLevel, int maxLevel)
    : Item(name), Upgradeable(startingLevel), maxLevel(maxLevel)
{
}

void LimitedUpgradeableItem::upgrade()
{
    if (level < maxLevel)
    {
        level++;
        // Upgradeable::upgrade(); // this is also possible instead
    }
}

std::string LimitedUpgradeableItem::getName() const
{
    std::string levelText = (level == maxLevel) ? "MAX" : std::to_string(level);
    return name + " (" + levelText + " LVL)";
}

