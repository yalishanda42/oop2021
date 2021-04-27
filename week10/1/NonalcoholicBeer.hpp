#pragma once

#include "Beer.hpp"
#include "SoftDrink.hpp"

class NonalcoholicBeer: public Beer, public SoftDrink {
public:
    NonalcoholicBeer(std::string brand = "", double quantity = 0.0);
};
