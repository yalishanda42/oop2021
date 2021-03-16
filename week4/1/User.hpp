#pragma once

class User
{
public:
    User();
    User(const char* email);
    User(const char* email, const char* username);
    User(const User&);
    User& operator=(const User&);
    ~User();

    const char* getEmail() const;

    const char* getUsername() const;
    void setUsername(const char* newUsername);

private:
    char* email;
    char* username;

    // Helper methods

    void setEmail(const char*); // private setter
    void copyString(char* to, const char* from);
};
