#pragma once
#include <iostream>

using namespace std;

class Fraction
{
private:
	double numerator;
	double denominator;

public:	
	double result;
	
	Fraction();
	~Fraction();
	
	double addition(double x1, double x2);
	double subtraction(double x1, double x2);
	double multiplication(double x1, double x2);
	double division(double x1, double x2);
	
	void print(double &n);
	
	friend char operation(double a, double b);
	friend void get_max(Fraction, Fraction);
	friend void template_(Fraction, Fraction);
};
