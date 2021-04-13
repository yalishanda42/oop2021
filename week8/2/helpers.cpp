#include "helpers.hpp"

char* newCopy(const char* from)
{
    if (!from) return nullptr;
    char* result = new char[strlen(from) + 1];
    strcpy(result, from);
    return result;
}
