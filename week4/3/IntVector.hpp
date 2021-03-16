#pragma once

class IntVector
{
public:
    IntVector();
    IntVector(const IntVector&);
    IntVector& operator=(const IntVector&);
    ~IntVector();

    int& operator[](unsigned int index);
    IntVector operator+(const IntVector&);
    IntVector& operator+=(const IntVector&);

    unsigned int length() const;
    void push_back(int element);
    void pop_back();
    int find_first(int element) const;
    bool insert(int element, unsigned int index);
    bool erase(unsigned int index);
    bool empty() const;
    void clear();

private:
    int *array;
    unsigned int size;

    // Helpers

    void copyArray(const int* source, unsigned int size);
};
