#include "Product.hpp"
#include <cstring>

Product::Product() : name(new char[1]), price(0), amount(0)
{
    strcpy(name, "");
}

Product::Product(const char* name, double price, unsigned int amount)
    : price(price), amount(amount)
{
    copyName(name);
}

Product::Product(const Product& rhs)
    : price(rhs.price), amount(rhs.amount)
{
    copyName(rhs.name);
}

Product& Product::operator=(const Product& rhs)
{
    if (&rhs != this)
    {
        setName(rhs.name);
        price = rhs.price;
        amount = rhs.amount;
    }
    return *this;
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
    copyName(newName);
}

void Product::copyName(const char* source)
{
    int nameLength = strlen(source);
    name = new char[nameLength + 1];
    strcpy(name, source);
}
