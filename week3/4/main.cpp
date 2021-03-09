#include <iostream>
#include "Product.hpp"

int main()
{
    Product p1 = Product("Product 1", 4.2, 2);

    Product p2 = p1; // uses the copy constructor
    p2.setName("Product 2");

    // expectation != reality if we do not
    // define our own copy contructor:

    std::cout << "Product 1 name: " << p1.getName() << std::endl
        << "Product 2 name: " << p2.getName() << std::endl;

    return 0;
}