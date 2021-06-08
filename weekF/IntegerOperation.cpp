//
//  IntegerOperation.cpp
//  Exam
//
//  Created by Alexander Ignatov on 8.06.21.
//

#include "IntegerOperation.hpp"

void IntegerOperation::copyOtherArray(const int* other, unsigned size)
{
    if (!other) {
        array = nullptr;
        return;
    }
    array = new int[size];
    for (int i = 0; i < size; i++) {
        array[i] = other[i];
    }
}

IntegerOperation::IntegerOperation() : result(0), size(0), array(nullptr)
{
}

IntegerOperation::IntegerOperation(const IntegerOperation& rhs) : result(rhs.result), size(rhs.size)
{
    copyOtherArray(rhs.array, rhs.size);
}

IntegerOperation& IntegerOperation::operator=(const IntegerOperation& rhs)
{
    if (this != &rhs)
    {
        delete[] array;
        result = rhs.result;
        size = rhs.size;
        copyOtherArray(rhs.array, rhs.size);
    }
    return *this;
}

IntegerOperation::~IntegerOperation()
{
    delete[] array;
}


void IntegerOperation::insert(int element)
{
    int* newArray = new int[size + 1];
    for (int i = 0; i < size; i++)
    {
        newArray[i] = array[i];
    }
    newArray[size] = element;
    
    size++;
    delete[] array;
    array = newArray;
}

void IntegerOperation::sum()
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    result = sum;
}

void IntegerOperation::sub()
{
    int sub = 0;
    for (int i = 0; i < size; i++)
    {
        sub -= array[i];
    }
    result = sub;
}

void IntegerOperation::multiply()
{
    int mul = 1;
    for (int i = 0; i < size; i++)
    {
        mul *= array[i];
    }
    result = mul;
}


int IntegerOperation::get_result() const
{
    return result;
}

int IntegerOperation::operator+(IntegerOperation& rhs)
{
    sum();
    int result1 = get_result();
    
    rhs.sum();
    int result2 = rhs.get_result();
    
    return result1 + result2;
}

int IntegerOperation::operator-(IntegerOperation& rhs)
{
    sub();
    int result1 = get_result();
    
    rhs.sub();
    int result2 = rhs.get_result();
    
    return result1 - result2;
}

int IntegerOperation::operator*(IntegerOperation& rhs)
{
    multiply();
    int result1 = get_result();
    
    rhs.multiply();
    int result2 = rhs.get_result();
    
    return result1 * result2;
}

