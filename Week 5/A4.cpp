#include <iostream>

using namespace std;

void array(int x[]);
void STRING(string s);

int main()
{
    int a[5] = { 1,2,3,4,5 };
    for (int i = 0; i < 5; i++) 
		cout << &a[i] << " ";
    cout << endl;
    string s;
    array(a);
    cout << &s << endl;
    STRING(s);
    
    return 0;
}

void array(int x[])
{
    for (int i = 0; i < 5; i++) 
		cout << &x[i] << " ";
    cout << endl;
}

void STRING(string s)
{
    cout << &s << endl;
}

//Deu theo phuong thuc pass by reference
