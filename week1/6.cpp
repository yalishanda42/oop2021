#include <iostream>

struct RouteCheckpoint
{
    RouteCheckpoint* next;
    char name[1024];
};

void printRoute(const RouteCheckpoint* start)
{
    if (start == nullptr)
        return; // just in case

    const RouteCheckpoint* currentPoint = start;
    std::cout << start->name;
    while (currentPoint->next != nullptr)
    {
        currentPoint = currentPoint->next;
        std::cout << "->" << currentPoint->name;
    }
}

void printRouteRecursively(const RouteCheckpoint* start)
{
    if (start == nullptr)
    {
        return;
    }

    std::cout << start->name;

    if (start->next != nullptr)
    {
        std::cout << "->";
    }

    printRouteRecursively(start->next);
}