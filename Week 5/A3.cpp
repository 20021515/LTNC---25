#include <iostream>

using namespace std;

void doicho(int x, int y);
void laidoicho(int& x, int& y);

int main()
{
    int a, b;
    cin >> a >> b;
    cout << &a << " " << &b << endl;
    doicho(a, b);
    laidoicho(a, b);
    
    return 0;
}

void doicho(int x, int y)
{
    int m = x;
    x = y;
    y = m;
    cout << &x << " " << &y << endl;
}

void laidoicho(int& x, int& y)
{
    int m = x;
    x = y;
    y = m;
    cout << &x << " " << &y << endl;
}

//2 Ket qua khac nhau
