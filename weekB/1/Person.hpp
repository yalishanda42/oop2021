#pragma once

#include <vector>
#include "Pet.hpp"
#include "Dog.hpp"

class Person {
    std::vector<Pet*> pets;
    
    void deleteAll();
    void copyOther(const Person&);
public:
    Person() = default;
    Person(const Person&);
    Person& operator=(const Person&);
    ~Person();
    void adopt(Pet*);
    void feedEmAll();
    void petEmAll() const;
    void walkAllDogs();
};
