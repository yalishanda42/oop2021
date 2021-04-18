#include "UpgradeableAndEquippableItem.hpp"

UpgradeableAndEquippableItem::UpgradeableAndEquippableItem(std::string name, int startingLevel, bool isEquipped)
    : Item(name), Upgradeable(startingLevel), Equippable(isEquipped)
{
}

std::string UpgradeableAndEquippableItem::getName() const
{
    std::string equipText = isEquipped ? "[+]" : "[-]";
    return equipText + " " + name + " (" + std::to_string(level) + " LVL)";
}
