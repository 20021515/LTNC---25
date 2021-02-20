#include <iostream>
#include <cmath>

using namespace std;

bool KiemTra(int n)
{
	for (int i = 2;i < sqrt(n);i++)
		if (n%i == 0) 
			return false;
	return false;
}
int main()
{
	int n;
	cin >> n;
	if (KiemTra(n)) 
		cout << "yes";
	else
		cout << "no";
		
	return 0;
}
