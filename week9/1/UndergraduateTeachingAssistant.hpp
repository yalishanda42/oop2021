#pragma once

#include "Teacher.hpp"
#include "Student.hpp"

class UndergraduateTeachingAssistant: public Teacher, public Student {
    
public:
    UndergraduateTeachingAssistant(std::string username,
                                   std::string department,
                                   unsigned fn,
                                   unsigned year,
                                   unsigned group);
};
