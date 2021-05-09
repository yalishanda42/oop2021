//
//  Beer.cpp
//  Labs
//
//  Created by Alexander Ignatov on 27.04.21.
//

#include "Beer.hpp"

Beer::Beer(std::string brand, double alcoholPercentage, double quantityInLitres, Type type, bool isCraft)
    : Drink(brand, alcoholPercentage, quantityInLitres), type(type), isCraft(isCraft)
{
}

Beer::Type Beer::getType() const
{
    return type;
}

bool Beer::getIsCraft() const
{
    return isCraft;
}

