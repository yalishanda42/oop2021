struct Complex
{
    double real;
    double imaginary;
};

Complex complexFromReal(double real)
{
    Complex result = {real, 0};
    return result;
}

bool isEqual(const Complex& lhs, const Complex& rhs)
{
    return lhs.real == rhs.real && lhs.imaginary == rhs.imaginary;
}

Complex add(const Complex& lhs, const Complex& rhs)
{
    double realPart = lhs.real + rhs.real;
    double imaginaryPart = lhs.imaginary + rhs.imaginary;
    return Complex{realPart, imaginaryPart};
}

Complex multiply(const Complex& lhs, const Complex& rhs)
{
    double realPart = lhs.real * rhs.real - lhs.imaginary * rhs.imaginary;
    double imaginaryPart = lhs.real * rhs.imaginary + lhs.imaginary * rhs.real;
    return Complex{realPart, imaginaryPart};
}

Complex conjugated(const Complex& c)
{
    return Complex{c.real, -c.imaginary};
}

void conjugate(Complex& c)
{
    c.imaginary = -c.imaginary;
}

// or alternatively:
void conjugate(Complex* c)
{
    c->imaginary = -c->imaginary;
}
