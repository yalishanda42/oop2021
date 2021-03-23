#pragma once
#include <string>
#include <vector>

/// Alternative, if no encapsulation is needed:
struct Product
{
    std::string name;
    double price;
    unsigned int amount;

    Product(const std::string& name = "", double price = 0.0, unsigned int amount = 0)
        : name(name), price(price), amount(amount) {}
};


class WebStore
{
private:
    std::vector<Product> inventory;
    double profit;

public:
    bool addProduct(const Product&);
    bool removeProduct(const std::string& name);
    double getPriceOf(const std::string& name) const;
    unsigned int getAmount(const std::string& name) const;
    bool addOneOf(const std::string& name);
    bool sellOneOf(const std::string& name);
    double getProfit() const;

private:
    // Helpers

    /// Return the index of the first product with the given name.
    /// Return `-1` if none.
    int getProductIndexByName(const std::string&) const;
};
