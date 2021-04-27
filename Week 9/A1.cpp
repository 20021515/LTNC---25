#include <iostream>
#include <cstring>

using namespace std;

char *concat(const char *s1, const char *s2)
{
	char *s3 = new char [strlen(s1) + strlen(s2)];
	
	s3 = strcpy(s3, s1);
	s3 = strcat(s3, s2);
	
	return s3;
}

int main()
{
	char s1[] = "Hello";
	char s2[] = "World";
	
	cout << concat(s1, s2);
	
	return 0;
}
