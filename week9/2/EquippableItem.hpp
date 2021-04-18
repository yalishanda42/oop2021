#pragma once

#include "Item.hpp"
#include "Equippable.hpp"

class EquippableItem : public Item, public Equippable {
public:
    EquippableItem(std::string name, bool isEquipped = false);
    std::string getName() const;
};
