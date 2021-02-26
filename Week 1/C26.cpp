#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int array[n];
	double sum = 0;
	for(int i=0;i<n;i++)
	{
		cin >> array[i];
		sum += array[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(array[i]>array[j])
			{
				int tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
		}
	}
	
	cout << "Mean: " << sum/n << endl;
	cout << "Max: " << array[n-1] << endl;
	cout << "Min: " << array[0];
	
	return 0;
}
