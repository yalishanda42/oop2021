#include "Complex.hpp"

Complex::Complex()
    : real(0), imag(0)
{
}

Complex::Complex(double real)
    : real(real), imag(0)
{
}

Complex::Complex(double real, double imag)
    : real(real), imag(imag)
{
}

Complex Complex::operator+(const Complex& rhs) const
{
    Complex result;
    result.real = real + rhs.real;
    result.imag = imag + rhs.imag;
    return result;
}

Complex& Complex::operator+=(const Complex& rhs)
{
    real += rhs.real;
    imag += rhs.imag;
}

Complex Complex::operator-(const Complex& rhs) const
{
    Complex result;
    result.real = real - rhs.real;
    result.imag = imag - rhs.imag;
    return result;
}

Complex Complex::operator-() const
{
    Complex result;
    result.real = -real;
    result.imag = -imag;
    return result;
}

Complex& Complex::operator-=(const Complex& rhs)
{
    real -= rhs.real;
    imag -= rhs.imag;
}

Complex Complex::operator*(const Complex& rhs) const
{
    Complex result = *this;
    result *= rhs;
    return result;
}

Complex& Complex::operator*=(const Complex& rhs)
{
    real = real * rhs.real - imag * rhs.imag;
    imag = real * rhs.imag + imag * rhs.real;
}

bool Complex::operator==(const Complex& rhs) const
{
    return real == rhs.real && imag == rhs.imag;
}

bool Complex::operator!=(const Complex& rhs) const
{
    return !(*this == rhs);
}
