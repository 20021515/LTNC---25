#include <iostream>

using namespace std;

int main()
{
    int a[3];
    char b[3];
    
    for (int i = 0; i < 3; i++) 
		cout << (void*)&a[i] << " ";
    cout << endl;
    for (int i = 0; i < 3; i++) 
		cout << (void*)&b[i] << " ";
    cout << endl;
    
    a[0] = 14;
    b[0] = 30;
    for (int i = 0; i < 3; i++) 
		cout << (void*)&a[i] << " ";
    cout << endl;
    for (int i = 0; i < 3; i++) 
		cout << (void*)&b[i] << " ";
    cout << endl;
    return 0;
    
    // K?t qu? gi?ng nhau và ch? khác ? 2 kí t? cu?i
}
