#include "Student.hpp"

Student::Student(std::string username, unsigned fn, unsigned year, unsigned group)
    : NoodleUser(username), fn(fn), year(year), group(group)
{
}

unsigned Student::getFN() const
{
    return fn;
}

unsigned Student::getYear() const
{
    return year;
}

unsigned Student::getGroup() const
{
    return group;
}

