struct Point
{
	int x;
	int y;
};

struct Rectangle
{
	Point origin;
	int width;
	int height;
};

bool pointInRectangle(Point p, Rectangle r)
{
	return r.origin.x <= p.x <= r.origin.x + r.width 
		&& r.origin.y <= p.y <= r.origin.y + r.height;
}

void translateRectangle(Rectangle& r, int deltaX, int deltaY)
{
	r.origin.x += deltaX;
	r.origin.y += deltaY;
}

Point* edgesOfRectangle(Rectangle r)
{
	Point topLeft = r.origin;
	Point topRight = { topLeft.x + r.width, topLeft.y };
	Point bottomLeft = { topLeft.x, topLeft.y + r.height };
	Point bottomRight = { topLeft.x + r.width, topLeft.y + r.height };
	Point result[4] = { topLeft, topRight, bottomLeft, bottomRight };
	return result;
}
struct Point
{
    int x;
    int y;
};

struct Rectangle
{
    Point origin;
    int width;
    int height;
};

bool pointInRectangle(Point p, Rectangle r)
{
    return r.origin.x <= p.x <= r.origin.x + r.width && r.origin.y <= p.y <= r.origin.y + r.height;
}

void translateRectangle(Rectangle &r, int deltaX, int deltaY)
{
    r.origin.x += deltaX;
    r.origin.y += deltaY;
}

Point *edgesOfRectangle(Rectangle r)
{
    Point topLeft = r.origin;
    Point topRight = {topLeft.x + r.width, topLeft.y};
    Point bottomLeft = {topLeft.x, topLeft.y + r.height};
    Point bottomRight = {topLeft.x + r.width, topLeft.y + r.height};
    Point result[4] = {topLeft, topRight, bottomLeft, bottomRight};
    return result;
}