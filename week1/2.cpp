#include <iostream>

int main()
{
    int n, m;

    std::cin >> n >> m;

    int** matrix = new int*[n];

    for (int i = 0; i < n; i++)
    {
        matrix[i] = new int[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int newNumber;
            std::cin >> newNumber;
            matrix[i][j] = newNumber;
        }
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << "| ";
        for (int j = 0; j < m; j++)
        {
            std::cout << matrix[i][j] % 10 << " ";
        }
        std::cout << "|" << std::endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix;

    return 0;
}