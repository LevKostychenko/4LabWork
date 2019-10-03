#include "pch.h"
#include "Cylinder.h"


Cylinder::Cylinder(double xa, double ya, double za,
	double xb, double yb, double zb,
	double xc, double yc, double zc)
{
	this->Radius = sqrt(pow((xa - xb), 2) + pow((ya - yb), 2) + pow((za - zb), 2));
	this->Height = sqrt(pow((xa - xc), 2) + pow((ya - yc), 2) + pow((za - zc), 2));
}

Cylinder::Cylinder(Point a, Point b, Point c)
{
	this->Radius = sqrt(pow((a.X - b.X), 2) + pow((a.Y - b.Y), 2) + pow((a.Z - b.Z), 2));
	this->Height = sqrt(pow((a.X - c.X), 2) + pow((a.Y - c.Y), 2) + pow((a.Z - c.Z), 2));
}

double Cylinder::GetArea()
{
	return 2 * M_PI * this->Height * this->Radius;
}

double Cylinder::GetVolume()
{
	return M_PI * pow(this->Radius, 2) * this->Height;
}

void Cylinder::PrintName()
{
	std::cout << "This is Cylinder!" << std::endl;
}

Cylinder::~Cylinder()
{
}

