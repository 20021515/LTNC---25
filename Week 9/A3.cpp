#include <iostream>

using namespace std;

int main()
{
	char* a = new char[10];
	char* c = a + 3;
	for (int i = 0; i < 9; i++) a[i] = 'a';
	a[9] = '\0';
	cerr <<"a: " << "-" << a << "-" << endl;
	cerr <<"c: " << "-" << c << "-" << endl;
	delete c;
	cerr << "a after deleting c:" << "-" << a << "-" << endl;	//Error
	
	
	
	return 0;
}

//Con tro c co cung vi tri voi a va kich thuoc lon hon a nen giai phong c da vo tinh giai phong bo nho cua a


