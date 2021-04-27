#include <iostream>

using namespace std;

struct Point
{
	double x, y;
};

Point mid_point(const Point p1, const Point p2)
{
	Point mid;
	mid.x = (p1.x + p2.x)/2;
	mid.y = (p1.y + p2.y)/2;
	
	return mid;
}

int main()
{
	Point p1, p2;
	p1.x = 24;
	p1.y = 6;
	p2.x = 30;
	p2.y = 11;
	cout << "midPoint: (" << mid_point(p1, p2).x << ", " << mid_point(p1, p2).y << ")" << endl;
	
	return 0;
}
