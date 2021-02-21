#include <iostream>

int main()
{
    int n;

    std::cin >> n;

    int* numbers = new int[n];

    for (int i = 0; i < n; i++)
    {
        int newNumber;
        std::cin >> newNumber;
        numbers[i] = newNumber;
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << numbers[i];

        if (i != n - 1)
        {
            std::cout << ", ";
        }
    }

    return 0;
}