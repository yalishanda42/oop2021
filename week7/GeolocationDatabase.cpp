#include "GeolocationDatabase.hpp"

void GeolocationDatabase::read(const char* filename)
{
    std::ifstream inputFile(filename);

    if (!inputFile.is_open()) {
        return;
    }

    inputFile >> *this;
}

unsigned long GeolocationDatabase::size() const
{
    return locations.size();
}

std::istream& operator>>(std::istream& input, GeolocationDatabase& database)
{
    Geolocation location;
    while (input >> location) {
        database.locations.push_back(location);
    }
    return input;
}
