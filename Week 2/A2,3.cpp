#include <iostream>

using namespace std;

int main()
{
	int n, k;
	cin >> n;
	
	//a
	k = n;
	for (int i = 1; k >= 3; i++)
		k /= 3;
	cout << k << endl;
	
	//b
	k = n;
	while (true)
	{
		k /= 3;
		if (k < 3) 
			break;
	}
	cout << k << endl;
	
	//c
	while (k >= 3)
	{
		k /= 3;
	}
	cout << k << endl;
	
	//d
	k = n;
	while (true)
	{
		k /= 3;
		if (k < 3) 
		break;
	}
	cout << k << endl;
	
	//e
	k = n;
	while (true)
	{
		k /= 3;
		if (k >= 3) 
			continue;
		else 
			break;
	}
	cout << k;
	
	return 0;
}
