#include "Teacher.hpp"

Teacher::Teacher(std::string username, std::string department)
    : NoodleUser(username), department(department)
{
}

std::string Teacher::getDepartment() const
{
    return department;
}
