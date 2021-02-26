#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int x1, y1;
	int x2, y2;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cout << sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	
	return 0;
}
