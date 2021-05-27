#include "Fraction.h"

Fraction::Fraction()
{

}

Fraction::~Fraction()
{
	
}

double Fraction::addition(double x1, double x2)
{
	return x1 + x2;
}

double Fraction::subtraction(double x1, double x2)
{
	return x1 - x2;
}

double Fraction::multiplication(double x1, double x2)
{
	return x1 * x2;
}

double Fraction::division(double x1, double x2)
{
	return x1 / x2;
}

void Fraction::print(double &n)
{
	int i = 0;
	do
	{
		denominator = ++i;
		numerator = n * denominator;
	}while (numerator - (int)numerator != 0);
	
	cout << (int)numerator << "/" << (int)denominator;
	result = n;
}

char operation(double a, double b)
{
	if (a > b)
		return '>';
	else if (a < b)
		return '<';
	else 
		return '=';
}

//void get_max(Fraction f1, Fraction f2)
//{
//    if (f1.result >= f2.result)
//        f1.print(f1.result);
//    else
//        f2.print(f2.result);
//}

void template_(Fraction f1, Fraction f2)
{
    f1.print(f1.result);
    cout << " ";
    cout << operation(f1.result, f2.result);
    cout << " ";
    f2.print(f2.result);
}