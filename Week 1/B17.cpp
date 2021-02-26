#include <iostream>

using namespace std;

bool check(int n)
{
	if (n%4 == 0 && n%100 != 0 || n%400 == 0)
		return true;
	else 
		return false;
}
	
int main()
{
	int n;
	cout << "Check LeapYear: ";
	cin >> n;
	if(check(n))
		cout << "true";
	else
		cout << "false"; 	
	
	return 0;
}
