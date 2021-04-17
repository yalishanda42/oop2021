#pragma once

#include "NoodleUser.hpp"

class Student : virtual public NoodleUser {
    
    unsigned fn;
    unsigned year;
    unsigned group;
    
public:
    Student(std::string username, unsigned fn, unsigned year, unsigned group);
    unsigned getFN() const;
    unsigned getYear() const;
    unsigned getGroup() const;
};
