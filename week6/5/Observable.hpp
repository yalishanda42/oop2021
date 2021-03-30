#pragma once

#include <iostream>

template <typename T>
class Observable
{
    T value;

public:
    Observable(const T&);
    T getValue() const;
    void setValue(const T&);
};

template <typename T>
Observable<T>::Observable(const T& value)
: value(value)
{
}

template <typename T>
T Observable<T>::getValue() const
{
    return value;
}

template <typename T>
void Observable<T>::setValue(const T& newValue)
{
    T oldValue = value;

    std::cout << "Will set value from "
        << oldValue
        << " to "
        << newValue
        << std::endl;

    value = newValue;

    std::cout << "Did set value from "
        << oldValue
        << " to "
        << newValue
        << std::endl;
}