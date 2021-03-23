#pragma once
#include <iostream>

class String
{
public:
    String();
    String(const char *);
    String(const String&);
    String& operator=(const String&);
    ~String();

    char& operator[](unsigned int index) const;
    String operator+(const String&) const;
    String& operator+=(const String&);
    bool operator==(const String&) const;
    bool operator!=(const String&) const;
    bool operator<(const String&) const;
    bool operator>(const String&) const;
    bool operator<=(const String&) const;
    bool operator>=(const String&) const;

    friend std::ostream& operator<<(std::ostream& output, const String& rhs);
    friend std::istream& operator>>(std::istream& input, String& rhs);

    unsigned int length() const;
    void push_back(char);
    bool empty() const;
    void clear();
    const char* c_str() const;

private:
    char* array;
    unsigned int charArraySize;

    void copyCharArray(const char*);
};
