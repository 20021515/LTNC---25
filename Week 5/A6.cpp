#include <iostream>

using namespace std;
 
int search(int arr[], int n, int x);
 
int main() 
{
  	int arr[] = {2, 3, 4, 10, 40};
  	int n = sizeof(arr) / sizeof(arr[0]);
  	int x = 10;
  
  	int result = search(arr, n, x);
  	if (result != -1)
    	cout << x << " xuat hien tai vi tri so: " << result;
	else 
    	cout << x << " khong co trong array";
    
  	return 0;
}

int search(int arr[], int n, int x)
{
  	int i;
 	for (i = 0; i < n; i++)
	{
    	if (arr[i] == x)
      		return i;	//Tra ve gia tri tim duoc
    }
  	return -1;	//Chi so mang >= 0 nen tra ve -1
}
