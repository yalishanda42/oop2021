#include <iostream>
#include "IntVector.hpp"

void print(IntVector& vector)
{
    std::cout << "[ ";
    for (int i = 0; i < vector.length(); i++)
    {
        std::cout << vector[i] << " ";
    }
    std::cout << "]" << std::endl;
}

int main(int argc, const char* argv[])
{
    IntVector vector;
    print(vector);

    vector.push_back(1);
    vector.push_back(2);
    vector.push_back(3);
    print(vector);

    vector.insert(88, 1);
    print(vector);

    vector.erase(1);
    print(vector);

    IntVector vector2;
    vector2.push_back(4);
    vector2.push_back(5);
    vector2.push_back(6);

    IntVector bigVector = vector + vector2;
    print(bigVector);

    vector[0] = 7;
    vector[1] = 8;
    vector[2] = 9;
    bigVector += vector;
    print(bigVector);

    return 0;
}
