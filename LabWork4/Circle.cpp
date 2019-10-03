#include "pch.h"
#include "Circle.h"


Circle::Circle(double x, double y, double xc, double yc)
{
	this->Radius = sqrt(pow((x - xc), 2) + pow((y - yc), 2));
}

Circle::Circle(Point center, Point second)
{
	this->Radius = sqrt(pow((center.X - second.X), 2) + pow((center.Y - second.Y), 2));
}

double Circle::GetArea()
{
	return M_PI * pow(this->Radius, 2);
}

double Circle::GetPerimeter()
{
	return 2 * M_PI*this->Radius;
}

void Circle::PrintName()
{
	std::cout << "This is Circle!" << std::endl;
}

Circle::~Circle()
{
}
