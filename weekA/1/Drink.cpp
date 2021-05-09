#include "Drink.hpp"

Drink::Drink(std::string brand, double alcoholPercentage, double quantityInLitres)
    : brand(brand), alcoholPercentage(alcoholPercentage), quantityInLitres(quantityInLitres)
{
}

std::string Drink::getBrand() const
{
    return brand;
}

double Drink::getAlcoholPercentage() const
{
    return alcoholPercentage;
}

double Drink::getQuantityInLitres() const
{
    return quantityInLitres;
}

void Drink::add(double quantityInLitres)
{
    this->quantityInLitres += quantityInLitres;
}

void Drink::remove(double quantityInLitres)
{
    if (this->quantityInLitres >= quantityInLitres)
    {
        this->quantityInLitres -= quantityInLitres;
    }
}

std::string Drink::toString() const
{
    return brand + " (" + std::to_string(alcoholPercentage) + "%): " + std::to_string(quantityInLitres) + "L";
}

