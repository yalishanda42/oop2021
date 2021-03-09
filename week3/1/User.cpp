#include "User.hpp"
#include <cstring>

User::User()
{
    strcpy(email, "");
    strcpy(username, "");
}

User::User(const char email[User::MAX_LENGTH])
{
    strcpy(this->email, email);
    strcpy(this->username, email);
}

User::User(const char email[User::MAX_LENGTH], const char username[User::MAX_LENGTH])
{
    strcpy(this->email, email);
    strcpy(this->username, username);
}

User::User(const User& rhs)
{
    strcpy(email, rhs.email);
    strcpy(username, rhs.username);
}

const char* User::getEmail() const
{
    return email;
}

const char* User::getUsername() const
{
    return username;
}

void User::setUsername(const char newUsername[User::MAX_LENGTH])
{
    strcpy(username, newUsername);
}