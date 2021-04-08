#include <iostream>

using namespace std;

bool soSanh(int a[], int b[], int n);

int main()
{
    int n;
    cin >> n;
    int a[n],b[n];
    for (int i = 0;i < n;i++) 
		cin >> a[i];
    for (int i = 0;i < n;i++) 
		cin >> b[i];
    cout << soSanh(a,b,n);
    
    return 0;
}

bool soSanh(int a[],int b[],int n)
{
    for (int i = 0;i < n;i++)
     	for (int j = 0; j < n;j++)
      		if (a[i] != a[j])
       			return false;
    return true;       
}
