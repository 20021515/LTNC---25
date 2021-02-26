#include <iostream>

using namespace std;

int main()
{	
	int n;
	do
	{
		cin >> n;
		int x = (n>=0 && n%5==0) ? n/5 : -1;
		cout << x << endl;
	}while(n!=-1);
	cout << "Bye";
	
	return 0;
}
