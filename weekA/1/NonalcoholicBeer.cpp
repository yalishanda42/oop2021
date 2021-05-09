//
//  NonalcoholicBeer.cpp
//  Labs
//
//  Created by Alexander Ignatov on 27.04.21.
//

#include "NonalcoholicBeer.hpp"

NonalcoholicBeer::NonalcoholicBeer(std::string brand, double quantity)
: Drink(brand, 0.0, quantity), Beer(brand, 0.0, quantity, Beer::Type::OTHER, false), SoftDrink(brand, quantity)
{
}
