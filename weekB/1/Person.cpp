#include "Person.hpp"

void Person::deleteAll()
{
    for (auto pet : pets)
    {
        delete pet;
    }
    pets.clear();
}

void Person::copyOther(const Person& other)
{
    for (auto pet : other.pets)
    {
        pets.push_back(pet->copy());
    }
}

Person::Person(const Person& rhs)
{
    copyOther(rhs);
}

Person& Person::operator=(const Person& rhs)
{
    if (this != &rhs)
    {
        deleteAll();
        copyOther(rhs);
    }
    return *this;
}

Person::~Person()
{
    deleteAll();
}

void Person::adopt(Pet* newPet)
{
    pets.push_back(newPet->copy());
}

void Person::feedEmAll()
{
    for (auto pet : pets)
    {
        pet->feed();
    }
}

void Person::petEmAll() const
{
    for (auto pet : pets)
    {
        pet->pet();
    }
}

void Person::walkAllDogs()
{
    for (Pet* pet : pets)
    {
        Dog* dog = dynamic_cast<Dog*>(pet);
        if (dog)
        {
            dog->walk();
        }
    }
}

