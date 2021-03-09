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

    double getPrice() const;
    void setPrice(double);

    unsigned int getAmount() const;
    void setAmount(unsigned int);

private:
    char* name;
    double price;
    unsigned int amount;
};
