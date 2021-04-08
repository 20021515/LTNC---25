#include <iostream>
#include <cmath>

using namespace std;

void output(int n);

int main()
{
    int n;
    cin >> n;
    output(n);
    return 0;
}

void output(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = -n; j <= n; j++)
        {
 		    if (abs(j) < i) 
				cout << "*";
            else 
				cout << " ";
			cout << endl;
		}
    }
}
