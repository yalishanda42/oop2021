#pragma once

#include <string>

class Drink {
    std::string brand;
    double alcoholPercentage;
    double quantityInLitres;
    
public:
    Drink(std::string brand = "", double alcoholPercentage = 0.0, double quantityInLitres = 0.0);
    
    std::string getBrand() const;
    double getAlcoholPercentage() const;
    double getQuantityInLitres() const;
    
    void add(double quantityInLitres);
    void remove(double quantityInLitres);
    
    std::string toString() const;
};
