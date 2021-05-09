#pragma once

#include "Drink.hpp"

class Beer : virtual public Drink {
public:
    enum class Type
    {
        LIGHT_LAGER,
        DARK_LAGER,
        PALE_ALE,
        IPA,
        BOK,
        WEISS,
        LIVE,
        OTHER,
    };
    
    Beer(std::string brand = "", double alcoholPercentage = 0.0, double quantityInLitres = 0.0, Type type = Type::OTHER, bool isCraft = false);
    
    Type getType() const;
    bool getIsCraft() const;
    
private:
    Type type;
    bool isCraft;
};
