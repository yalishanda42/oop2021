#include "String.hpp"
#include <cstring>

String::String()
{
    copyCharArray("");
}

String::String(const char* cstring)
{
    copyCharArray(cstring);
}

String::String(const String& other)
{
    copyCharArray(other.array);
}

String& String::operator=(const String& other)
{
    if (&other != this)
    {
        delete[] array;
        copyCharArray(other.array);
    }
    return *this;
}

String::~String()
{
    delete[] array;
}

char& String::operator[](unsigned int index) const
{
    return array[index];
}

String String::operator+(const String& other) const
{
    String result = *this;
    result += other;
    return result;
}

String& String::operator+=(const String& other)
{
    const unsigned int newArraySize = charArraySize + other.length();
    char* const newArray = new char[newArraySize];

    strcpy(newArray, this->array); // can also be done with a for loop
    char* const secondSubstringBeginning = newArray + this->length();
    strcpy(secondSubstringBeginning, other.array); // can also be done with a for loop

    delete[] this->array;

    this->charArraySize = newArraySize;
    this->array = newArray;

    return *this;
}

bool String::operator==(const String& other) const
{
    return strcmp(array, other.array) == 0;
}

bool String::operator!=(const String& other) const
{
    return !(*this == other);
}

bool String::operator<(const String& other) const
{
    return strcmp(array, other.array) < 0;
}

bool String::operator>(const String& other) const
{
    return other < *this;
}

bool String::operator<=(const String& other) const
{
    return strcmp(array, other.array) <= 0;
}

bool String::operator>=(const String& other) const
{
    return other <= *this;
}

unsigned int String::length() const
{
    return charArraySize - 1;
}

void String::push_back(char c)
{
    charArraySize += 1;
    char* const newArray = new char[charArraySize];
    strcpy(newArray, array);
    newArray[charArraySize - 2] = c;
    newArray[charArraySize - 1] = '\0';
    delete[] array;
    array = newArray;
}

bool String::empty() const
{
    return charArraySize == 1;
}

void String::clear()
{
    delete[] array;
    copyCharArray("");
}

const char* String::c_str() const
{
    return array;
}

void String::copyCharArray(const char* source)
{
    charArraySize = strlen(source) + 1;
    array = new char[charArraySize];
    strcpy(array, source);
}

std::ostream& operator<<(std::ostream& output, const String& rhs)
{
    return output << rhs.c_str();
}

std::istream& operator>>(std::istream& input, String& rhs)
{
    char c;
    while ((c = input.get()) && c != '\n' && c != '\r' && c != ' ')
    {
        rhs.push_back(c);
    }
    return input;
}
