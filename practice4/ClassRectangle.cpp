#include "ClassRectangle.h"
#include <iostream>
//Ex1
void ClassRectangle::setParametersRectangle(double height, double width)
{
	if (height > 0 && width > 0) {
		this->height = height;
		this->lenght = lenght;
	}
	
}

double ClassRectangle::calculateAreaRectangle()
{
	if (this->height > 0 && this->lenght > 0)
	{
		return height * lenght;
	}
	else return 0;
}