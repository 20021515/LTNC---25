#include <iostream>

using namespace std;

struct Point
{
	int n;
	void f1 (int n)
	{
		cout << "f1: " << &n << " " << n << endl;
	}
	void f2 (int &n)
	{
		cout << "f2: " << &n << " " << n << endl;
	}
};

int main()
{
	Point var;
	int n = 24;
	cout << &n << " " << n << endl;
	var.f1(n);
	var.f2(n);
	
	return 0;
}
