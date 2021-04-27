#include <iostream>

using namespace std;

struct Point
{
	int x, y;
};

int main()
{
	Point pos;
	cout << &pos << endl << &pos.x << endl << &pos.y;
	
	return 0;
}

//Dia chi cua pos.x trung voi dia chi cau truc Point
