#include "WebStore.hpp"

int main()
{
    WebStore store;

    store.addProduct(Product("Nintendo Switch", 599.99, 100));
    store.addProduct(Product("Nintendo", 99.99, 1));
    store.addProduct(Product("PS5", 899.99, 0));

    store.sellOneOf("Nintendo Switch");
    store.sellOneOf("PS5"); // -> false

    store.removeProduct("PS5");

    store.sellOneOf("Nintendo");
    store.sellOneOf("Nintendo"); // -> false
    store.removeProduct("Nintendo");

    return 0;
}
