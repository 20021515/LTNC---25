#include <iostream>

using namespace std;

int main()
{
	int n = 36;
	int *p = &n;
	cout << p << " " << n << endl;
	delete p;
	cout << "deleted: " << p << " " << n << endl;
	
	return 0;
}

//Giai phong con tro dong nghia voi viec giai phong vung nho cua bien dia phuong ma no tro toi
