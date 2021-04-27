#include <iostream>

using namespace std;

struct struct_2
{
	int s2[100];
};

struct struct_1
{
	int *s1 = new int;
};

int main()
{
	struct_1 str1;
	struct_2 str2;
	
	str1.s1 = str2.s2;
	cout << str1.s1 << " " << str2.s2;
	
	return 0;
}
