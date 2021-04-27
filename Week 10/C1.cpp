#include <iostream>
#include <cstring>

using namespace std;

struct String
{
	int n;
	char *str = new char;
	String (const char *s)
	{
		n = strlen(s);
		strcpy(str, s);
	}
	~String ()
	{
		delete[] str;
	}
	void print()
	{
		cout << str << endl;
	}
	void append(const char *s)
	{
		strcat(str, s);
	}
	
};

int main()
{
	String s("Hi");
	s.print();
	s.append(" there");
	s.print();
	
	return 0;
}
