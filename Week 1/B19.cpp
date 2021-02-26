#include <iostream>

using namespace std;

bool b(int x, int y, int z)
{
	if (y>x && y>z || y<x && y<z)
		return true;
	else
		return false;
}

int main()
{
	int x,y,z;
	cin >> x >> y >> z;
	cout << b(x,y,z);
	
	return 0;
}
