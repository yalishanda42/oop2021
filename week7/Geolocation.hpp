#pragma once

#include <iostream>

struct Geolocation
{
    double longtitude;
    double latitude;

    Geolocation(double lo = 0, double la = 0);
};

std::istream& operator>>(std::istream&, Geolocation&);
