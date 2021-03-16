#pragma once

class Complex
{
public:
    double real;
    double imag;

    Complex();
    Complex(double real);
    Complex(double real, double imag);

    Complex operator+(const Complex&) const;
    Complex& operator+=(const Complex&);
    Complex operator-(const Complex&) const;
    Complex operator-() const;
    Complex& operator-=(const Complex&);
    Complex operator*(const Complex&) const;
    Complex& operator*=(const Complex&);
    bool operator==(const Complex&) const;
    bool operator!=(const Complex&) const;
};