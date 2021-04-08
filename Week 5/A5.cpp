#include <iostream>

using namespace std;

int main()
{
    int a;
    int* b = new int;
    cout << &a << " " << b << endl;
    *b = a;
    cout << &a << " " << b << endl;
    b = &a;
    cout << &a << " " << b << endl;
    int c;
    b = &c;
    cout << &c << " " << b << endl;
    return 0;
}

//a la 2 bien khac nhau trong bo nho
//b co the khai bao nhung chua tro ngay
//c co the
