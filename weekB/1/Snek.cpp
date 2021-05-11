#include "Snek.hpp"

Snek::Snek(std::string name) : Pet(name)
{
}

void Snek::pet() const
{
    Pet::pet();
    std::cout << ": sss" << std::endl;
}

void Snek::feed()
{
    health += 5;
}

Pet* Snek::copy() const
{
    return new Snek(*this);
}
