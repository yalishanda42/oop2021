#pragma once

class Upgradeable {
    
protected:
    int level;
    
public:
    Upgradeable(int startingLevel);
    int getLevel() const;
    void upgrade();
};
