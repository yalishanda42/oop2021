#pragma once

class Complex
{
public:
    double real;
    double imaginary;

    Complex();
    Complex(double real);
    Complex(double real, double imaginary);

    bool isEqualTo(const Complex& other) const;
    Complex add(const Complex& other) const;
    Complex multiply(const Complex& other) const;
    Complex conjugated() const;
    void conjugate();
};
