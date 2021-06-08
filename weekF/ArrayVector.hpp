//
//  ArrayVector.hpp
//  Exam
//
//  Created by Alexander Ignatov on 8.06.21.
//

#ifndef ArrayVector_hpp
#define ArrayVector_hpp

#include "Container.hpp"

template <typename T>
class ArrayVector : public Container<T> {
    unsigned maxSize;
    
public:
    ArrayVector(unsigned maxSize = 10);
    bool add(const T&) override;
};

template <typename T>
ArrayVector<T>::ArrayVector(unsigned maxSize)
: Container<T>(), maxSize(maxSize)
{
}

template <typename T>
bool ArrayVector<T>::add(const T& element)
{
    if (this->length == maxSize)
    {
        return false;
    }
    
    return Container<T>::add(element);
}

#endif /* ArrayVector_hpp */
