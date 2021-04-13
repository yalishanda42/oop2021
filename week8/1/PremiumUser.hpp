#pragma once

#include "User.hpp"

class PremiumUser : public User {
    
    long subscriptionStartTimestamp;
    
public:
    
    std::string bankAccountIBAN;
    
    PremiumUser(std::string email = "", std::string username = "", double balance = 0.0, std::string bankAccountIBAN = "", long subscriptionStartTimestamp = 0);
    
    long getSubscriptionStartTimestamp() const;
    
    void withdrawMoney(double amount);
    
    void chargeForSubscription();
};
