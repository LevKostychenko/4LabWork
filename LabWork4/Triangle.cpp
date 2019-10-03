#include "pch.h"
#include "Triangle.h"

Triangle::~Triangle()
{
}

Triangle::Triangle(double xa, double ya, double xb, double yb, double xc, double yc)
{
	this->A = sqrt(pow((xa - xb), 2) + pow((ya - yb), 2));
	this->B = sqrt(pow((xb - xc), 2) + pow((yb - yc), 2));
	this->C = sqrt(pow((xc - xa), 2) + pow((yc - ya), 2));
}

Triangle::Triangle(Point a, Point b, Point c)
{
	this->A = sqrt(pow((a.X - b.X), 2) + pow((a.Y - b.Y), 2));
	this->B = sqrt(pow((b.X - c.X), 2) + pow((b.Y - c.Y), 2));
	this->C = sqrt(pow((c.X - a.X), 2) + pow((c.Y - a.Y), 2));
}

double Triangle::GetArea()
{
	double p = (this->A + this->B + this->C) / 2;
	return sqrt(p*(p - this->A)*(p - this->B)*(p - this->C));
}

double Triangle::GetPerimeter()
{	
	return this->A + this->B + this->C;
}

void Triangle::PrintName()
{
	std::cout << "This is Triangle!" << std::endl;
}