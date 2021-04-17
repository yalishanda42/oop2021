#include "UndergraduateTeachingAssistant.hpp"

UndergraduateTeachingAssistant::UndergraduateTeachingAssistant
(
    std::string username,
    std::string department,
    unsigned fn,
    unsigned year,
    unsigned group
)
    : NoodleUser(username)
    , Teacher(username, department)
    , Student(username, fn, year, group)
{
}
