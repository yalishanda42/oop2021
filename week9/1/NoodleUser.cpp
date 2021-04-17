#include "NoodleUser.hpp"

NoodleUser::NoodleUser(std::string username) : username(username) {}

std::string NoodleUser::getUsername() const { return username; }
