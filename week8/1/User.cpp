#include "User.hpp"

User::User(std::string email, std::string username, double balance)
    : email(email), username(username), balance(balance)
{
}

std::string User::getEmail() const
{
    return email;
}

double User::getBalance() const
{
    return balance;
}

void User::depositMoney(double amount)
{
    balance += amount;
}
