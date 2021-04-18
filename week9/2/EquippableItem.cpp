#include "EquippableItem.hpp"

EquippableItem::EquippableItem(std::string name, bool isEquipped)
    : Item(name), Equippable(isEquipped)
{
}

std::string EquippableItem::getName() const
{
    std::string equipText = isEquipped ? "[+]" : "[-]";
    return equipText + " " + name;
}
