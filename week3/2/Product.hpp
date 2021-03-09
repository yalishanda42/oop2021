#pragma once

class Product
{
public:
    static const int NAME_MAX_LENGTH = 256;

    Product();
    Product(const char[NAME_MAX_LENGTH], double, unsigned int);
    Product(const Product&);

    const char* getName() const;
    void setName(const char[NAME_MAX_LENGTH]);

    double getPrice() const;
    void setPrice(double);

    unsigned int getAmount() const;
    void setAmount(unsigned int);

private:
    char name[NAME_MAX_LENGTH];
    double price;
    unsigned int amount;
};
