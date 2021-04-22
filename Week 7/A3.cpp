#include <iostream>

using namespace std;

int count_even(int *array, int n);

int a, b;
int main()
{
	int n;
	cin >> n;
	int array[n];
	for(int i=0; i<n; i++)
	{
		cin >> array[i];
	}
	a = 0;
	b = 5;
	cout << "So so chan trong 5 phan tu dau: " << count_even(array, n) << endl;
	a = n-5;
	b = n;
	cout << "So so chan trong 5 phan tu sau: " << count_even(array, n) << endl;
	
	return 0;
}

int count_even(int *array, int n)
{
	int count = 0;
	for(int i=a; i<b; i++)
	{
		if (*(array+i) % 2 == 0)
		{
			count++;
		}
	}
	
	return count;
}
