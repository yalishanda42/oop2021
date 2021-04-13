#pragma once

#include "User.hpp"

class PremiumUser : public User {
    
    long subscriptionStartTimestamp;
    char* bankAccountIBAN;
    
public:
    
    // Big 4 again, only because this subclass manages another dynamically allocated property.
    // If it didn't have `bankAccountIBAN` we wouldn't had the need to do it.
    
    PremiumUser(const char* email = "", const char* username = "", double balance = 0.0, const char* bankAccountIBAN = "", long subscriptionStartTimestamp = 0);
    PremiumUser(const PremiumUser&);
    PremiumUser& operator=(const PremiumUser&);
    ~PremiumUser();
    
    long getSubscriptionStartTimestamp() const;
    
    const char* getBankAccountIBAN() const;
    void setBankAccountIBAN(const char*);
    
    void withdrawMoney(double amount);
    
    void chargeForSubscription();
};
