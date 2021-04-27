#pragma once

#include "Drink.hpp"

class SoftDrink : virtual public Drink {
public:
    SoftDrink(std::string brand = "", double quantity = 0.0);
};
