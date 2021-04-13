#pragma once

#include "helpers.hpp"

class User {
    
private:
    
    char* email;
    char* username;
    
protected:
    
    double balance;
    
public:
    
    User(const char* email = "", const char* username = "", double balance = 0.0);
    User(const User&);
    User& operator=(const User&);
    ~User();
    
    const char* getEmail() const;
    
    const char* getUsername() const;
    void setUsername(const char*);
    
    double getBalance() const;
    
    void depositMoney(double amount);
    
};
