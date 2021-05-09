#pragma once

#include "Drink.hpp"

class Whiskey : public Drink {
    unsigned ageInYears;
    
public:
    Whiskey(std::string brand = "", double alcoholPercentage = 0.0, double quantityInLitres = 0.0, unsigned ageInYears = 0);
    
    unsigned getAgeInYears() const;
    void addAnYear();
};
