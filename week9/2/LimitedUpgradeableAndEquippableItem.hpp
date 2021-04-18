#pragma once

#include "LimitedUpgradeableItem.hpp"
#include "Equippable.hpp"

class LimitedUpgradeableAndEquippableItem : public LimitedUpgradeableItem, public Equippable {
public:
    LimitedUpgradeableAndEquippableItem(std::string name, int startingLevel, int maxLevel, bool isEquipped = false);
    std::string getName() const;
};
