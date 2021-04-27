#pragma once

#include "SoftDrink.hpp"


class Coke : public SoftDrink {
    
public:
    enum class Type
    {
        CLASSIC,
        LIGHT,
        ZERO,
    };
    
    Coke(Type type = Type::CLASSIC, double quantity = 0.0);
    
    Type getType() const;
    
    std::string toString() const;
    
private:
    Type type;
    
    std::string typeString() const;
};
