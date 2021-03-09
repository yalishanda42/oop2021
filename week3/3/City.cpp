#include "City.hpp"
#include <cstring>

City::City() : population(0), isCapital(false)
{
    strcpy(name, "");
    strcpy(countryName, "");
}

City::City(const char name[City::NAME_MAX_LENGTH],
           const char countryName[City::NAME_MAX_LENGTH],
           unsigned int population,
           bool isCapital)
    : population(population), isCapital(isCapital)
{
    strcpy(this->name, name);
    strcpy(this->countryName, countryName);
}

City::City(const City& rhs)
    : population(rhs.population)
    , isCapital(rhs.isCapital)
{
    strcpy(name, rhs.name);
    strcpy(countryName, rhs.countryName);
}

const char* City::getName() const
{
    return name;
}

const char* City::getCountryName() const
{
    return countryName;
}

unsigned int City::getPopulation() const
{
    return population;
}

bool City::getIsCapital() const
{
    return isCapital;
}

void City::setName(const char newValue[City::NAME_MAX_LENGTH])
{
    strcpy(name, newValue);
}

void City::setCountryName(const char newValue[City::NAME_MAX_LENGTH])
{
    strcpy(countryName, newValue);
}

void City::setPopulation(unsigned int newValue)
{
    population = newValue;
}

void City::setIsCapital(bool newValue)
{
    isCapital = newValue;
}
