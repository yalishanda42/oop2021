#include "WebStore.hpp"

bool WebStore::addProduct(const Product& newProduct)
{
    if (getProductIndexByName(newProduct.name) != -1)
        return false;

    inventory.push_back(newProduct);
    return true;
}

bool WebStore::removeProduct(const std::string& name)
{
    int idx = getProductIndexByName(name);
    if (idx == -1) return false;

    inventory.erase(inventory.begin() + idx);

    return true;
}

double WebStore::getPriceOf(const std::string& name) const
{
    int idx = getProductIndexByName(name);
    if (idx == -1) return 0.0;

    return inventory[idx].price;
}

unsigned int WebStore::getAmount(const std::string& name) const
{
    int idx = getProductIndexByName(name);
    if (idx == -1) return 0;

    return inventory[idx].amount;
}

bool WebStore::addOneOf(const std::string& name)
{
    int idx = getProductIndexByName(name);
    if (idx == -1) return false;

    inventory[idx].amount += 1;

    return true;
}

bool WebStore::sellOneOf(const std::string& name)
{
    int idx = getProductIndexByName(name);
    if (idx == -1) return false;
    if (!inventory[idx].amount) return false;

    inventory[idx].amount -= 1;
    profit += inventory[idx].amount;

    return true;
}

double WebStore::getProfit() const
{
    return profit;
}

int WebStore::getProductIndexByName(const std::string& name) const
{
    for (int i = 0; i < inventory.size(); i++)
        if (inventory[i].name == name)
            return i;

    return -1;
}
