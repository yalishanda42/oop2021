#pragma once

#include "Item.hpp"
#include "Upgradeable.hpp"

class UpgradeableItem : public Item, public Upgradeable {
public:
    UpgradeableItem(std::string name, int startingLevel);
    std::string getName() const;
};
