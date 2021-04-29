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

void Fraction::print(double &result)
{
	int i = 0;
	do
	{
		denominator = ++i;
		numerator = result * denominator;
	}while (numerator - (int)numerator != 0);
	
	cout << (int)numerator << "/" << (int)denominator << endl;
}
