#include "PremiumUser.hpp"

PremiumUser::PremiumUser(std::string email,
                         std::string username,
                         double balance,
                         std::string bankAccountIBAN,
                         long subscriptionStartTimestamp)
    : User(email, username, balance),
    bankAccountIBAN(bankAccountIBAN),
    subscriptionStartTimestamp(subscriptionStartTimestamp)
{
}

long PremiumUser::getSubscriptionStartTimestamp() const
{
    return subscriptionStartTimestamp;
}

void PremiumUser::withdrawMoney(double amount)
{
    balance -= amount;
}

void PremiumUser::chargeForSubscription()
{
    balance -= 42;
}
