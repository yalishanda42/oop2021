//
//  IntegerOperation.hpp
//  Exam
//
//  Created by Alexander Ignatov on 8.06.21.
//

#ifndef IntegerOperation_hpp
#define IntegerOperation_hpp

class IntegerOperation {
    int* array;
    unsigned size;
    
    int result;
    
    void copyOtherArray(const int*, unsigned);
    void extendWithOtherArray(const int*, unsigned);
public:
    IntegerOperation();
    IntegerOperation(const IntegerOperation&);
    IntegerOperation& operator=(const IntegerOperation&);
    ~IntegerOperation();
    
    void insert(int);
    void sum();
    void sub();
    void multiply();
    
    int get_result() const;
    
    int operator+(IntegerOperation&);
    int operator-(IntegerOperation&);
    int operator*(IntegerOperation&);
};

#endif /* IntegerOperation_hpp */
