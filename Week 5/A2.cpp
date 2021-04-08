#include <iostream>

using namespace std;

int factorial(int n)

int main()
{
    int n = 4;
    factorial(n);

    return 0;
}

int factorial(int n)
{
    if (n == 1) 
		return 1;
    else
    {
        cout <<" n =" << n << "at" << &n << endl;
    }
    return n * factorial(n - 1);
}
// Cac gia tri luu tru o cac o gan nhau
