#include <iostream>

using namespace std;

string Fibo(int i)
{
	if (i == 0) 
		return "a";
	else if (i == 1) 
		return "b";
	else 
		return Fibo(i - 1) + Fibo(i - 2);
}

int main()
{
	for (int i = 0;i <= 10;i++) cout << Fibo(i) << endl;
	
	return 0;
}
