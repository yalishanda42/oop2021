//
//  Whiskey.cpp
//  Labs
//
//  Created by Alexander Ignatov on 27.04.21.
//

#include "Whiskey.hpp"

Whiskey::Whiskey(std::string brand, double alcoholPercentage, double quantityInLitres, unsigned ageInYears)
: Drink(brand, alcoholPercentage, quantityInLitres), ageInYears(ageInYears)
{
    
}


unsigned Whiskey::getAgeInYears() const
{
    return ageInYears;
}

void Whiskey::addAnYear()
{
    ageInYears++;
}

