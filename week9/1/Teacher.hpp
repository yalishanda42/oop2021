#pragma once

#include "NoodleUser.hpp"

class Teacher : virtual public NoodleUser {
    
    std::string department;
    
public:
    Teacher(std::string username, std::string department);
    std::string getDepartment() const;
};
