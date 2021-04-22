#include <iostream>

using namespace std;

int f(int *A)
{
		
	return sizeof(A);
}

int main()
{
	int A[] = {1, 2, 3};
	cout << sizeof(A) << endl;
	cout << f(A) << endl;
	
	return 0;
}
