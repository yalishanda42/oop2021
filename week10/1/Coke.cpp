//
//  Coke.cpp
//  Labs
//
//  Created by Alexander Ignatov on 27.04.21.
//

#include "Coke.hpp"

Coke::Coke(Type type, double quantity)
    : SoftDrink("Coca-Cola", quantity), type(type)
{
}

Coke::Type Coke::getType() const
{
    return type;
}

std::string Coke::toString() const
{
    return getBrand() + " " + typeString() + " (" + std::to_string(getAlcoholPercentage()) + "%): " + std::to_string(getQuantityInLitres()) + "L";
}

std::string Coke::typeString() const
{
    switch (type) {
        case Type::LIGHT:
            return "Light";
        case Type::CLASSIC:
            return "Classic";
        case Type::ZERO:
            return "Zero";
        default:
            return "";
    }
}
