#pragma once

struct Point
{
    int x;
    int y;
};

class Rectangle
{
public:
    Point origin;
    int width;
    int height;

    Rectangle();
    Rectangle(Point origin, int width, int height);

    bool isPointInside(const Point& p) const;
    void translate(int deltaX, int deltaY);
    Point* edges() const;
    void edges(Point edgesArray[]) const;
};
