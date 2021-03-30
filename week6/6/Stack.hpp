#pragma once

#include <vector>

template<typename T>
class Stack
{
    std::vector<T> vector;

public:
    void push(const T&);
    void pop();
    T& top() const;
    bool isEmpty() const;
    unsigned int size() const;
};

template<typename T>
void Stack<T>::push(const T& element)
{
    vector.push_back(element);
}

template<typename T>
void Stack<T>::pop()
{
    if (vector.size() == 0) return;
    vector.erase(vector.begin() + vector.size() - 1);
}

template<typename T>
T& Stack<T>::top() const
{
    // this will crash for an empty vector
    return vector[vector.begin() + vector.size() - 1];
}

template<typename T>
bool Stack<T>::isEmpty() const
{
    return vector.size() == 0;
}

template<typename T>
unsigned int Stack<T>::size() const
{
    return vector.size();
}
