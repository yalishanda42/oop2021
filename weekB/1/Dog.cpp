#include "Dog.hpp"

Dog::Dog(std::string name) : Pet(name) {}

void Dog::pet() const
{
    Pet::pet();
    std::cout << ": bark bark" << std::endl;
}

void Dog::feed()
{
    health++;
}

void Dog::walk()
{
    health += 5;
}

Pet* Dog::copy() const
{
    return new Dog(*this);
}
