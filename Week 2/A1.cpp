#include <iostream>

using namespace std;

int main()
{
	//a
	for (int i = 1; i <= 100; i++)
		if (i%2 == 0) 
			cout << i << " ";
	cout << endl;
	
	//b
	int i = 0;
	while (true)
	{
		i++;
		if (i%2 == 0) 
			cout << i << " ";
		if (i == 100) 
			break;
	}
	cout << endl;
	
	//c 
	i = 0;
	while (i < 100)
	{
		i++;
		if (i%2 == 0) 
			cout << i << " ";
	}
	cout << endl;
	
	//d
	i = 0;
	while (true)
	{
		i++;
		if (i%2 == 0) 
			cout << i << " ";
		if (i == 100) 
			break;
	}
	cout << endl;
	
	//e
	i = 0;
	while (true)
	{
		i++;
		if (i%2 == 0) 
			cout << i << " ";
		if (i < 100) 
			continue;
		else 
			break;
	}
	
	return 0;
}
