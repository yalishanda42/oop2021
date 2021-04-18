#pragma once

#include "Item.hpp"
#include "Upgradeable.hpp"

class LimitedUpgradeableItem : public Item, public Upgradeable {
protected:
    int maxLevel;
public:
    LimitedUpgradeableItem(std::string name, int startingLevel, int maxLevel);
    void upgrade();
    std::string getName() const;
};
