#include "pch.h"
#include "Point.h"


Point::Point(double x, double y)
{
	this->X = x;
	this->Y = y;
}

Point::Point(double x, double y, double z)
{
	this->X = x;
	this->Y = y;
	this->Z = z;
}

Point::~Point()
{
}
