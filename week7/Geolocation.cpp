#include "Geolocation.hpp"

Geolocation::Geolocation(double lo, double la)
: longtitude(lo), latitude(la)
{
}

std::istream& operator>>(std::istream& input, Geolocation& location)
{
    double lo, la;
    input >> lo >> la;
    location = Geolocation(lo, la);
    return input;
}
