#pragma once

class Equippable {
    
protected:
    bool isEquipped;
    
public:
    Equippable(bool isEquipped = false);
    bool getIsEquipped() const;
    void equip();
    void unequip();
};
