#include "Rectangle.hpp"

Rectangle::Rectangle()
{
    origin.x = 0;
    origin.y = 0;
    width = 0;
    height = 0;
}

Rectangle::Rectangle(Point origin, int width, int height)
{
    this->origin = origin;
    this->width = width;
    this->height = height;
}

bool Rectangle::isPointInside(const Point& p) const
{
    return origin.x <= p.x && p.x <= origin.x + width
        && origin.y <= p.y && p.y <= origin.y + height;
}

void Rectangle::translate(int deltaX, int deltaY)
{
    origin.x += deltaX;
    origin.y += deltaY;
}

Point* Rectangle::edges() const
{
    Point topLeft = origin;
    Point topRight = {topLeft.x + width, topLeft.y};
    Point bottomLeft = {topLeft.x, topLeft.y + height};
    Point bottomRight = {topLeft.x + width, topLeft.y + height};
    Point* result = new Point[4];
    result[0] = topLeft;
    result[1] = topRight;
    result[2] = bottomLeft;
    result[3] = bottomRight;
    return result;
}

void Rectangle::edges(Point edgesArray[]) const
{
    Point topLeft = origin;
    Point topRight = {topLeft.x + width, topLeft.y};
    Point bottomLeft = {topLeft.x, topLeft.y + height};
    Point bottomRight = {topLeft.x + width, topLeft.y + height};
    edgesArray[0] = topLeft;
    edgesArray[1] = topRight;
    edgesArray[2] = bottomLeft;
    edgesArray[3] = bottomRight;
}
