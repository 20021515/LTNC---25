#include <iostream>

using namespace std;

int main()
{
	int* p = new int;
	int* p2 = p;
	*p = 10;
	delete p; //Error
	cout << *p2;
	delete p2;
	
	return 0;
}

//Con tro p2 tro vao p (cung cho voi p) nen xoa gia tri p thi p2 se tro ve cho khac (khong phai NULL)
