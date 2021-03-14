#pragma once

class Product
{
public:
    Product();
    Product(const char*, double, unsigned int);
    Product(const Product&);
    ~Product(); // destructor

    const char* getName() const;
    void setName(const char*);

    double price;
    unsigned int amount;

private:
    char* name;
};
