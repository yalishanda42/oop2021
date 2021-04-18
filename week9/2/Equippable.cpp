#include "Equippable.hpp"

Equippable::Equippable(bool isEquipped)
    : isEquipped(isEquipped)
{
}

bool Equippable::getIsEquipped() const
{
    return isEquipped;
}

void Equippable::equip()
{
    isEquipped = true;
}

void Equippable::unequip()
{
    isEquipped = false;
}

