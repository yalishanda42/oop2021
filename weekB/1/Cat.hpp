#pragma once

#include "Pet.hpp"

class Cat : public Pet {
public:
    Cat(std::string name = "");
    void pet() const override;
    void feed() override;
    
    Pet* copy() const override;
};
