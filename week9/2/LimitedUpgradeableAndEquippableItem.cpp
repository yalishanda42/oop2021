#include "LimitedUpgradeableAndEquippableItem.hpp"

LimitedUpgradeableAndEquippableItem::LimitedUpgradeableAndEquippableItem(
     std::string name,
     int startingLevel,
     int maxLevel,
     bool isEquipped
)
    : LimitedUpgradeableItem(name, startingLevel, maxLevel)
    , Equippable(isEquipped)
{
}

std::string LimitedUpgradeableAndEquippableItem::getName() const
{
    std::string equipText = isEquipped ? "[+]" : "[-]";
    return equipText + " " + LimitedUpgradeableItem::getName();
}
