#include "Complex.hpp"

Complex::Complex()
{
    real = 0;
    imaginary = 0;
}

Complex::Complex(double real)
{
    this->real = real;
    imaginary = 0;
}

Complex::Complex(double real, double imaginary)
{
    this->real = real;
    this->imaginary = imaginary;
}

bool Complex::isEqualTo(const Complex& other) const
{
    return real == other.real && imaginary == other.imaginary;
}

Complex Complex::add(const Complex& other) const
{
    double realPart = real + other.real;
    double imaginaryPart = imaginary + other.imaginary;
    return Complex(realPart, imaginaryPart);
}

Complex Complex::multiply(const Complex& other) const
{
    double realPart = real * other.real - imaginary * other.imaginary;
    double imaginaryPart = real * other.imaginary + imaginary * other.real;
    return Complex(realPart, imaginaryPart);
}

Complex Complex::conjugated() const
{
    return Complex(real, -imaginary);
}

void Complex::conjugate()
{
    imaginary = -imaginary;
}
