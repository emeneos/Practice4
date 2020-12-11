#pragma once
class ComplexNumbers
{
private:
	double a;
	double aj;
	double b;
	double bj;
public:
	void setTwoComplexNumbers(double a, double aj, double b, double bj);
	double addRealPart();
	double addImaginaryPart();
};

