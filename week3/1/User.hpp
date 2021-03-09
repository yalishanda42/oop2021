#pragma once

class User
{
public:
    static const int MAX_LENGTH = 64;

    /// default constructor
    User();

    /// constructor with 1 prameter
    User(const char email[MAX_LENGTH]);

    /// constructor with 2 parameters
    User(const char email[MAX_LENGTH], const char username[MAX_LENGTH]);

    /// copy constructor
    User(const User&);

    const char* getEmail() const;

    const char* getUsername() const;
    void setUsername(const char newUsername[MAX_LENGTH]);

private:
    char email[MAX_LENGTH];
    char username[MAX_LENGTH];
};
