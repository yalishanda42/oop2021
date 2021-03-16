#pragma once

class String
{
public:
    String();
    String(const char*);
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
