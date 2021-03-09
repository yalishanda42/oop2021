#include "User.hpp"
#include <cstring>

User::User() : email(new char[1]), username(new char[1])
{
    strcpy(email, "");
    strcpy(username, "");
}

User::User(const char* email)
{
    int length = strlen(email);

    this->email = new char[length + 1];
    strcpy(this->email, email);

    this->username = new char[length + 1];
    strcpy(this->username, email);
}

User::User(const char* email, const char* username)
{
    this->email = new char[strlen(email) + 1];
    strcpy(this->email, email);

    this->username = new char[strlen(username) + 1];
    strcpy(this->username, username);
}

User::User(const User& rhs)
{
    email = new char[strlen(rhs.email) + 1];
    strcpy(email, rhs.email);

    username = new char[strlen(rhs.username) + 1];
    strcpy(username, rhs.username);
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
    username = new char[strlen(newUsername) + 1];
    strcpy(username, newUsername);
}