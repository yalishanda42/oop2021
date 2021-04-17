#pragma once

#include <string>

class NoodleUser {
    
    std::string username;

public:
    NoodleUser(std::string username);
    std::string getUsername() const;
};
