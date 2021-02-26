#include <iostream>

using namespace std;

bool Divisibility(int a, int b)
{
	if (a%7==0 || b%7==0)
		return true;
	return false;		
}

int main()
{
	int a,b;
	cin >> a >> b;
	if(Divisibility(a,b))
		cout << "true";
	else
		cout << "false";
	
	return 0;
}
