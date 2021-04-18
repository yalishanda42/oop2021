#pragma once

#include "Item.hpp"
#include "Upgradeable.hpp"
#include "Equippable.hpp"

class UpgradeableAndEquippableItem : public Item, public Upgradeable, public Equippable {
public:
    UpgradeableAndEquippableItem(std::string name, int startingLevel, bool isEquipped = false);
    std::string getName() const;
};
