#include "User.hpp"

User::User(const char* email, const char* username, double balance)
    : email(newCopy(email)),
    username(newCopy(username)),
    balance(balance)
{
}

User::User(const User& rhs)
    : email(newCopy(rhs.email)),
    username(newCopy(rhs.username)),
    balance(rhs.balance)
{
}

User& User::operator=(const User& rhs)
{
    if (this != &rhs)
    {
        delete[] email;
        email = newCopy(rhs.email);
        // above 2 lines could be in a private setEmail() as well
        setUsername(rhs.username);
        balance = rhs.balance;
    }
    return *this;
}

User::~User()
{
    delete[] email;
    delete[] username;
}


const char* User::getEmail() const
{
    return email;
}

const char* User::getUsername() const
{
    return username;
}

void User::setUsername(const char* newValue)
{
    delete[] username;
    username = newCopy(newValue);
}

double User::getBalance() const
{
    return balance;
}

void User::depositMoney(double amount)
{
    balance += amount;
}
