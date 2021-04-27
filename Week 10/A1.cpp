#include <iostream>

using namespace std;

struct Point
{
	int Xpos;
	int Ypos;
};

void print(Point toaDo)
{
	cout << "(" << toaDo.Xpos << ", " << toaDo.Ypos << ")" << endl;
}

int main()
{
	Point toaDo;
	toaDo.Xpos = 14;
	toaDo.Ypos = 30;
	print(toaDo);
	
	return 0;
}
