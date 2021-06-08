//
//  Set.hpp
//  Exam
//
//  Created by Alexander Ignatov on 8.06.21.
//

#ifndef Set_hpp
#define Set_hpp

#include "Container.hpp"

template <typename T>
class Set : public Container<T> {
public:
    bool add(const T&) override;
};

template <typename T>
bool Set<T>::add(const T& element)
{
    if (this->member(element))
    {
        return false;
    }
    
    return Container<T>::add(element);
}

#endif /* Set_hpp */
