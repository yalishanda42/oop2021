#pragma once

#include "Geolocation.hpp"
#include <vector>
#include <iostream>
#include <fstream>

class GeolocationDatabase {

    std::vector<Geolocation> locations;

public:
    void read(const char* filename);

    unsigned long size() const;

    friend std::istream& operator>>(std::istream&, GeolocationDatabase&);
};

