#pragma once

#include "Pet.hpp"

class Snek : public Pet {
public:
    Snek(std::string name = "");
    void pet() const override;
    void feed() override;
    
    Pet* copy() const override;
};
