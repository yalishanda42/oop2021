#pragma once

#include "Pet.hpp"

class Dog : public Pet {
public:
    Dog(std::string name = "");
    void pet() const override;
    void feed() override;
    void walk();
    
    Pet* copy() const override;
};
