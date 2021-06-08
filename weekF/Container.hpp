//
//  Container.hpp
//  Exam
//
//  Created by Alexander Ignatov on 8.06.21.
//

#ifndef Container_hpp
#define Container_hpp

template<typename T>
class Container {
protected:
    T* elements;
    unsigned length;
    
    void copyOtherContainer(const Container<T>&);
    int findIndexOf(const T&) const;
public:
    Container();
    Container(const Container<T>&);
    Container<T>& operator=(const Container<T>&);
    virtual ~Container();
    
    bool member(const T&) const;
    virtual bool add(const T&) = 0;
    bool remove(const T&);
    int size() const;
    T& operator[] (int i);
};

template<typename T>
Container<T>::Container() : length(0), elements(nullptr)
{
}

template<typename T>
void Container<T>::copyOtherContainer(const Container<T>& rhs)
{
    if (!rhs.elements)
    {
        elements = nullptr;
        return;
    }
    elements = new T[rhs.length];
    for (int i = 0; i < rhs.length; i++) {
        elements[i] = rhs.elements[i];
    }
}

template<typename T>
Container<T>::Container(const Container<T>& rhs) : length(rhs.length)
{
    copyOtherContainer(rhs);
}

template<typename T>
Container<T>& Container<T>::operator=(const Container<T>& rhs)
{
    if (this != &rhs)
    {
        delete[] elements;
        length = rhs.length;
        copyOtherContainer(rhs);
    }
    return *this;
}

template<typename T>
Container<T>::~Container()
{
    delete[] elements;
}

template<typename T>
bool Container<T>::member(const T& toFind) const
{
    return findIndexOf(toFind) != -1;
}

template<typename T>
int Container<T>::findIndexOf(const T& element) const
{
    for(int i = 0; i < length; i++)
    {
        if (elements[i] == element)
        {
            return i;
        }
    }
    return -1;
}

template<typename T>
bool Container<T>::remove(const T& toRemove)
{
    if (!elements)
    {
        return false;
    }
    
    if (length == 1 && elements[0] == toRemove)
    {
        delete elements[0];
        elements = nullptr;
        length = 0;
        return true;
    }
    
    int index = findIndexOf(toRemove);
    if (index == -1)
    {
        return false;
    }
    
    T* newArray = new T[length - 1];
    int idx = 0;
    for(int i = 0; i < length - 1; i++)
    {
        if (idx != index)
        {
            newArray[i] = elements[idx];
            idx++;
        }
    }
    
    length--;
    delete[] elements;
    elements = newArray;
    
    return true;
}

template<typename T>
int Container<T>::size() const
{
    return length;
}

template<typename T>
T& Container<T>::operator[] (int i)
{
    return elements[i];
}

template<typename T>
bool Container<T>::add(const T& element)
{
    T* newArray = new T[this->length + 1];
    for (int i = 0; i < this->length; i++)
    {
        newArray[i] = this->elements[i];
    }
    newArray[this->length] = element;
    
    this->length++;
    delete[] this->elements;
    this->elements = newArray;
    
    return true;
}

#endif /* Container_hpp */
