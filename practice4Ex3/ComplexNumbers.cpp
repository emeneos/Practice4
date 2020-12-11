#include "ComplexNumbers.h"

void ComplexNumbers::setTwoComplexNumbers(double a, double aj, double b, double bj)
{
	this->a = a;
	this->aj = aj;
	this->b = b;
	this->bj = bj;
}
double ComplexNumbers::addRealPart()
{
	return this->a + this->b;
}
double ComplexNumbers::addImaginaryPart()
{
	return this->aj + this->bj;
}