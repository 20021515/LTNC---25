#include <iostream>
using namespace std;
int main()
{
	int a,n;
	cin >> a >> n;
	int read;
	for (int i = 0;i < n;i++) 
	{
		cin >> read;
		if (a == read) 
			cout << i + 1 << " ";
	}
	
	return 0;	
}
