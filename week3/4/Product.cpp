#include "Product.hpp"
#include <cstring>

Product::Product() : name(new char[1]), price(0), amount(0)
{
    strcpy(name, "");
}

Product::Product(const char* name, double price, unsigned int amount)
    : price(price), amount(amount)
{
    int nameLength = strlen(name);
    this->name = new char[nameLength + 1];
    strcpy(this->name, name);
}

Product::Product(const Product& rhs)
    : price(rhs.price), amount(rhs.amount)
{
    int nameLength = strlen(rhs.name);
    name = new char[nameLength + 1];
    strcpy(name, rhs.name);
}

Product::~Product()
{
    delete[] name;
}

const char* Product::getName() const
{
    return name;
}

void Product::setName(const char* newName)
{
    delete[] name;
    int nameLength = strlen(newName);
    name = new char[nameLength + 1];
    strcpy(name, newName);
}
