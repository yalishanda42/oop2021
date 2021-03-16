#pragma once

class Product
{
public:
    Product(const char *, double, unsigned int);

    /* THE BIG 4: */
    Product();
    Product(const Product&);
    Product& operator=(const Product&);
    ~Product();
    /* ========== */

    const char *getName() const;
    void setName(const char *);

    double price;
    unsigned int amount;

private:
    char *name;

    // Helpers:

    void copyName(const char *);
};
