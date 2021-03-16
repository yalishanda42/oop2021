#include "User.hpp"
#include <cstring>

User::User() : email(new char[1]), username(new char[1])
{
    strcpy(email, "");
    strcpy(username, "");
}

User::User(const char* email)
{
    copyString(this->email, email);
    copyString(this->username, email);
}

User::User(const char* email, const char* username)
{
    copyString(this->email, email);
    copyString(this->username, username);
}

User::User(const User& rhs)
{
    copyString(email, rhs.email);
    copyString(username, rhs.username);
}

User& User::operator=(const User& rhs)
{
    if (&rhs != this)
    {
        setEmail(rhs.email);
        setUsername(rhs.username);
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

void User::setUsername(const char* newUsername)
{
    delete[] username;
    copyString(username, newUsername);
}

void User::setEmail(const char* newEmail)
{
    delete[] email;
    copyString(email, newEmail);
}

void User::copyString(char* to, const char* from)
{
    to = new char[strlen(from) + 1];
    strcpy(to, from);
}