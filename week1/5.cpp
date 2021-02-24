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

bool pointInRectangle(const Point& p, const Rectangle& r)
{
	return r.origin.x <= p.x <= r.origin.x + r.width
		&& r.origin.y <= p.y <= r.origin.y + r.height;
}

void translateRectangle(Rectangle& r, int deltaX, int deltaY)
{
	r.origin.x += deltaX;
	r.origin.y += deltaY;
}

// edges: first way:
Point* edgesOfRectangle(const Rectangle& r)
{
	Point topLeft = r.origin;
	Point topRight = { topLeft.x + r.width, topLeft.y };
	Point bottomLeft = { topLeft.x, topLeft.y + r.height };
	Point bottomRight = { topLeft.x + r.width, topLeft.y + r.height };
	Point* result = new Point[4];
	result[0] = topLeft;
	result[1] = topRight;
	result[2] = bottomLeft;
	result[3] = bottomRight;
	// Important issue here: `new[]` is called but `delete[]` is not.
	// This means that the function that is calling this one MUST call `delete[]`
	// on the returned address.
	return result;
}

// edges: second way:
// We overcome the problem of the first way by
// passing in an already created array
// so that we can just fill it in here
void edgesOfRectangle(const Rectangle& r, Point edgesArray[]) {
	Point topLeft = r.origin;
	Point topRight = {topLeft.x + r.width, topLeft.y};
	Point bottomLeft = {topLeft.x, topLeft.y + r.height};
	Point bottomRight = {topLeft.x + r.width, topLeft.y + r.height};
	edgesArray[0] = topLeft;
	edgesArray[1] = topRight;
	edgesArray[2] = bottomLeft;
	edgesArray[3] = bottomRight;
}
