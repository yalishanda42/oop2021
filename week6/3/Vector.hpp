#pragma once

template <typename T>
class Vector
{
public:
    Vector();
    Vector(const Vector&);
    Vector& operator=(const Vector&);
    ~Vector();

    T& operator[](unsigned int index);
    Vector operator+(const Vector&);
    Vector& operator+=(const Vector&);

    unsigned int length() const;
    void push_back(const T& element);
    void pop_back();
    int find_first(const T& element) const;
    bool insert(const T& element, unsigned int index);
    bool erase(unsigned int index);
    bool empty() const;
    void clear();

private:
    T* array;
    unsigned int size;

    // Helpers

    void copyArray(const T* source, unsigned int size);
};

template <typename T>
Vector<T>::Vector() : array(nullptr), size(0)
{
}

template <typename T>
Vector<T>::Vector(const Vector& rhs) // : size(rhs.size)
{
    copyArray(rhs.array, rhs.size);
}

template <typename T>
Vector<T>& Vector<T>::operator=(const Vector& rhs)
{
    if (&rhs != this)
    {
        delete[] array; // don't worry; deleting nullptr is totally fine
        copyArray(rhs.array, rhs.size);
    }
    return *this;
}

template <typename T>
Vector<T>::~Vector()
{
    delete[] array;
}

template <typename T>
T& Vector<T>::operator[](unsigned int index)
{
    return array[index];
}

template <typename T>
Vector<T> Vector<T>::operator+(const Vector& rhs)
{
    Vector result = *this;
    result += rhs;
    return result;
}

template <typename T>
Vector<T>& Vector<T>::operator+=(const Vector& rhs)
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
        T* newArray = new T[newSize];

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

template <typename T>
unsigned int Vector<T>::length() const
{
    return size;
}

template <typename T>
void Vector<T>::push_back(const T& element)
{
    const unsigned int newSize = size + 1;
    T* newArray = new T[newSize];
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

template <typename T>
void Vector<T>::pop_back()
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
    T* newArray = new T[newSize];
    for (int i = 0; i < newSize; i++)
    {
        newArray[i] = array[i];
    }
    delete[] array;

    array = newArray;
    size = newSize;

}

template <typename T>
int Vector<T>::find_first(const T& element) const
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

template <typename T>
bool Vector<T>::insert(const T& element, unsigned int index)
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
    T* newArray = new T[newSize];

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

template <typename T>
bool Vector<T>::erase(unsigned int index)
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
    T* newArray = new T[newSize];

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

template <typename T>
bool Vector<T>::empty() const
{
    return size == 0;
}

template <typename T>
void Vector<T>::clear()
{
    delete[] array;
    array = nullptr;
    size = 0;
}

template <typename T>
void Vector<T>::copyArray(const T* source, unsigned int size)
{
    this->size = size;

    if (!size)
    {
        array = nullptr;
        return;
    }

    array = new T[size];
    for (int i = 0; i < size; i++)
    {
        array[i] = source[i];
    }
}
