#include "UpgradeableItem.hpp"

UpgradeableItem::UpgradeableItem(std::string name, int startingLevel)
    : Item(name), Upgradeable(startingLevel)
{
}

std::string UpgradeableItem::getName() const
{
    return name + " (" + std::to_string(level) + " LVL)";
}
