#pragma once

class City
{
public:
    static const int NAME_MAX_LENGTH = 85;

    City();
    City(const char name[NAME_MAX_LENGTH],
         const char countryName[NAME_MAX_LENGTH],
         unsigned int population,
         bool isCapital);
    City(const City&);

    const char* getName() const;
    const char* getCountryName() const;

    void setName(const char[NAME_MAX_LENGTH]);
    void setCountryName(const char[NAME_MAX_LENGTH]);

    unsigned int population;
    bool isCapital;

private:
    char name[NAME_MAX_LENGTH];
    char countryName[NAME_MAX_LENGTH];
};