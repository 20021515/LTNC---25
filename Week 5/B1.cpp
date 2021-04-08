#include <iostream>

using namespace std;

bool majority(bool a, bool b, bool c);

int main()
{
    bool a, b, c;
    a = true;
    b = true;
    c = false;
    cout << majority(a, b, c) << endl;
    
    return 0;
}

bool majority(bool a, bool b, bool c)
{
	if(a + b + c >= 2)
		return true;
	return false;
}
