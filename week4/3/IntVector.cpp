#include "IntVector.hpp"

IntVector::IntVector() : array(nullptr), size(0)
{
}

IntVector::IntVector(const IntVector& rhs) // : size(rhs.size)
{
    copyArray(rhs.array, rhs.size);
}

IntVector& IntVector::operator=(const IntVector& rhs)
{
    if (&rhs != this)
    {
        delete[] array; // don't worry; deleting nullptr is totally fine
        copyArray(rhs.array, rhs.size);
    }
    return *this;
}

IntVector::~IntVector()
{
    delete[] array;
}

int& IntVector::operator[](unsigned int index)
{
    return array[index];
}

IntVector IntVector::operator+(const IntVector& rhs) const
{
    IntVector result = *this;
    result += rhs;
    return result;
}

IntVector& IntVector::operator+=(const IntVector& rhs)
{
    if (!rhs.array)
    {
        // nothing to add
    }
    else if (!array)
    {
        copyArray(rhs.array, rhs.size);
    }
    else
    {
        const unsigned int newSize = size + rhs.size;
        int* newArray = new int[newSize];

        // [0 ... size)
        // all elements of this->array
        for (int i = 0; i < size; i++)
        {
            newArray[i] = array[i];
        }

        // [size ... newSize)
        // all elements of rhs.array
        for (int i = size; i < newSize; i++)
        {
            newArray[i] = rhs.array[i - size];
        }

        delete[] array;
        array = newArray;
        size = newSize;
    }

    return *this;
}

unsigned int IntVector::length() const
{
    return size;
}

void IntVector::push_back(int element)
{
    const unsigned int newSize = size + 1;
    int* newArray = new int[newSize];
    if (array)
    {
        for (int i = 0; i < size; i++)
        {
            newArray[i] = array[i];
        }
    }
    newArray[newSize - 1] = element;

    delete[] array;
    array = newArray;
    size = newSize;
}

void IntVector::pop_back()
{
    if (!array) return; // invalid operation

    if (size == 1)
    {
        delete[] array;
        array = nullptr;
        size = 0;
        return;
    }

    const unsigned int newSize = size - 1;
    int* newArray = new int[newSize];
    for (int i = 0; i < newSize; i++)
    {
        newArray[i] = array[i];
    }
    delete[] array;

    array = newArray;
    size = newSize;

}

int IntVector::find_first(int element) const
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }

    return -1;
}

bool IntVector::insert(int element, unsigned int index)
{
    if (index > size)
    {
        return false;
    }

    if (index == size)
    {
        push_back(element);
        return true;
    }

    const unsigned int newSize = size + 1;
    int* newArray = new int[newSize];

    for (int i = 0; i < index; i++)
    {
        newArray[i] = array[i];
    }

    newArray[index] = element;

    for (int i = index + 1; i < newSize; i++)
    {
        newArray[i] = array[i - 1];
    }

    delete[] array;

    array = newArray;
    size = newSize;
    return true;
}

bool IntVector::erase(unsigned int index)
{
    if (!array)
    {
        return false;
    }

    if (index >= size)
    {
        return false;
    }

    if (size == 1)
    {
        delete[] array;
        array = nullptr;
        size = 0;
        return true;
    }

    const unsigned int newSize = size - 1;
    int* newArray = new int[newSize];

    for (int i = 0; i < index; i++)
    {
        newArray[i] = array[i];
    }

    for (int i = index; i < newSize; i++)
    {
        newArray[i] = array[i + 1];
    }

    delete[] array;

    array = newArray;
    size = newSize;
    return true;
}

bool IntVector::empty() const
{
    return size == 0;
}

void IntVector::clear()
{
    delete[] array;
    array = nullptr;
    size = 0;
}

void IntVector::copyArray(const int* source, unsigned int size)
{
    this->size = size;

    if (!size)
    {
        array = nullptr;
        return;
    }

    array = new int[size];
    for (int i = 0; i < size; i++)
    {
        array[i] = source[i];
    }
}