#include "PremiumUser.hpp"

PremiumUser::PremiumUser(const char* email,
                         const char* username,
                         double balance,
                         const char* bankAccountIBAN,
                         long subscriptionStartTimestamp)
    : User(email, username, balance),
    bankAccountIBAN(newCopy(bankAccountIBAN)),
    subscriptionStartTimestamp(subscriptionStartTimestamp)
{
}

PremiumUser::PremiumUser(const PremiumUser& rhs)
    : User(rhs),
    bankAccountIBAN(newCopy(rhs.bankAccountIBAN)),
    subscriptionStartTimestamp(rhs.subscriptionStartTimestamp)
{
}

PremiumUser& PremiumUser::operator=(const PremiumUser& rhs)
{
    if (this != &rhs)
    {
        User::operator=(rhs);
        setBankAccountIBAN(rhs.bankAccountIBAN);
        subscriptionStartTimestamp = rhs.subscriptionStartTimestamp;
    }
    return *this;
}

PremiumUser::~PremiumUser()
{
    delete[] bankAccountIBAN;
}

long PremiumUser::getSubscriptionStartTimestamp() const
{
    return subscriptionStartTimestamp;
}

const char* PremiumUser::getBankAccountIBAN() const
{
    return bankAccountIBAN;
}

void PremiumUser::setBankAccountIBAN(const char* newValue)
{
    delete[] bankAccountIBAN;
    bankAccountIBAN = newCopy(newValue);
}

void PremiumUser::withdrawMoney(double amount)
{
    balance -= amount;
}

void PremiumUser::chargeForSubscription()
{
    balance -= 42;
}
