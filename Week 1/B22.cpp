#include <iostream>

using namespace std;

double BMI(double w, double h)
{
	return w/(h*h);
}

int main()
{
	double w, h;
	cin >> w >> h;
	cout << BMI(w,h);
	
	return 0;
}
