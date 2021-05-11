#include "Pet.hpp"

Pet::Pet(std::string name) : name(name), health(100) {}

int Pet::getHealth() const
{
    return health;
}

void Pet::pet() const
{
    std::cout << "Petting " << name;
}
