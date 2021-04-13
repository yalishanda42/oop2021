#pragma once

#include <string>

class User {
    
private:
    
    std::string email;
    
protected:
    
    double balance;
    
public:
    
    std::string username;
    
    User(std::string email = "", std::string username = "", double balance = 0.0);
    
    std::string getEmail() const;
    
    double getBalance() const;
    
    void depositMoney(double amount);
    
};
