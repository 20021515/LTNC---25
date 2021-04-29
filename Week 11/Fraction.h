#pragma once
#include <iostream>

using namespace std;

class Fraction
{
private:
public:
	double numerator;
	double denominator;
	
	Fraction();
	~Fraction();
	
	double addition(double x1, double x2);
	double subtraction(double x1, double x2);
	double multiplication(double x1, double x2);
	double division(double x1, double x2);
	
	void print(double &result);
};
