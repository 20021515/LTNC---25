#include <iostream>

using namespace std;

int solve(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;
    if (solve(a, b) == 1) 
		cout << "Yes";
    else 
		cout << "No";
    
	return 0;
}

int solve(int a, int b)
{
    if (a == b) 
		return a;
    else
    {
        while (a != b)
        {
            if (a > b) 
				a -= b;
            if (a < b) 
				b -= a;
        }
        
        return a;
    }
}
