#include "Fraction.h"
#include <Windows.h>

void test(Fraction &f)
{
	double a1, b1;
	double a2, b2;
	double result;
	char operation;
	do
	{
		cout << "a1/b1 a2/b2" << endl;
		cout << "a1?\t";
		cin >> a1;
		cout << "b1?\t";
		cin >> b1;
		cout << "+-*/?\t";
		cin >> operation;
		cout << "a2?\t";
		cin >> a2;
		cout << "b2?\t";
		cin >> b2;
	}while (b1 == 0 || b2 == 0 || operation != '+' && operation != '-' && operation != '*' && operation != '/' );
	
	//EM DUNG CAI WHILE KIA DE BO QUA HAM ASSERT DUOC KHONG CO :)
	
	cout << endl << a1 << "/" << b1 << " " << operation << " " << a2 << "/" << b2 << " = " ;
	
	switch(operation)
	{
		case '+':
			result = f.addition(a1/b1, a2/b2);
			break;
		case '-':
			result = f.subtraction(a1/b1, a2/b2);
			break;
		case '*':
			result = f.multiplication(a1/b1, a2/b2);
			break;
		case '/':
			result = f.division(a1/b1, a2/b2);
			break;
	}
	f.print(result);
	cout << endl;
}

int main(int argc, char* argv[])
{
	Fraction f1;
	Fraction f2;
	
	test(f1);
	test(f2);
//	cout << "Gia tri lon hon la: ";
//	get_max(f1, f2);
	template_(f1, f2);
	
	return 0;
} 
