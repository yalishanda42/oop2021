#include <iostream>
#include "String.hpp"

void print(const String& string)
{
    std::cout << string.c_str() << std::endl;
}

void print(bool statement)
{
    std::cout << (statement ? "true" :  "false") << std::endl;
}

int main()
{
    String s = "Constructor with 1 parameter works";
    print(s);

    print("Same thing here");

    s = "Operator= works!";
    print(s);

    String abra = "abra";
    String cad = "cad";
    print(abra + cad + abra);

    String abracadabra = (abra += (cad + abra));
    print(abracadabra);


    String name1 = "Alex";
    String name2 = "Bobby";
    String name3 = name1;

    print(name1 == name2); // false
    print(name1 == name3); // true

    print(name1 != name2); // true
    print(name1 != name3); // false

    print(name1 < name2);  // true
    print(name1 <= name2); // true
    print(name1 <= name3); // true

    print(name1 > name2);  // false
    print(name1 >= name2); // false
    print(name1 >= name3); // true

    return 0;
}