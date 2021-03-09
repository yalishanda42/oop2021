#include "Product.hpp"
#include <cstring>

Product::Product() : price(0), amount(0)
{
    strcpy(name, "");
}

Product::Product(const char name[Product::NAME_MAX_LENGTH], double price, unsigned int amount)
    : price(price), amount(amount)
{
    strcpy(this->name, name);
}

Product::Product(const Product& rhs)
    : price(rhs.price), amount(rhs.amount)
{
    strcpy(name, rhs.name);
}

const char* Product::getName() const
{
    return name;
}

void Product::setName(const char *newName)
{
    strcpy(name, newName);
}

double Product::getPrice() const
{
    return price;
}

void Product::setPrice(double newPrice)
{
    price = newPrice;
}

unsigned int Product::getAmount() const
{
    return amount;
}

void Product::setAmount(unsigned int newAmount)
{
    amount = newAmount;
}
