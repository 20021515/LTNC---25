#include <iostream>

using namespace std;

void f(int A[]);

int main()
{
	int A[10];
	cout << A << " " << &A[0] << endl;
	f(A);
	
	return 0;
}

void f(int A[])
{
	cout << A << " " << &A[0] << endl;
}

//Ket qua giong nhau
