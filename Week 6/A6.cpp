#include <iostream>

int a;
int H(int n)
{
	a++; 
	std::cout << a << std::endl;
	int x[1000];
	if(n==0) return 0;
	return H(n);
}

int main()
{
	int n;
	std::cout << "Nhap: ";
	std::cin >> n;
	std::cout << H(n);
	
	return 0;
}
