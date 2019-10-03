#include "pch.h"
#include "Parallelepiped.h"


Parallelepiped::Parallelepiped(double xa, double ya, double za,
	double xb, double yb, double zb,
	double xc, double yc, double zc,
	double xd, double yd, double zd) 
{
	this->Lenght = sqrt(pow((xa - xd), 2) + pow((ya - yd), 2) + pow((za - zd), 2));
	this->Width = sqrt(pow((xa - xb), 2) + pow((ya - yb), 2) + pow((za - zb), 2));
	this->Height = sqrt(pow((xa - xc), 2) + pow((ya - yc), 2) + pow((za - zc), 2));
}

Parallelepiped::Parallelepiped(Point a, Point b, Point c, Point d) 
{
	this->Lenght = sqrt(pow((a.X - d.X), 2) + pow((a.Y - d.Y), 2) + pow((a.Z - d.Z), 2));
	this->Width = sqrt(pow((a.X - b.X), 2) + pow((a.Y - b.Y), 2) + pow((a.Z - b.Z), 2));
	this->Height = sqrt(pow((a.X - c.X), 2) + pow((a.Y - c.Y), 2) + pow((a.Z - c.Z), 2));
}

double Parallelepiped::GetVolume()
{
	return this->Height * this->Lenght * this->Width;
}

double Parallelepiped::GetArea()
{
	return (this->Height*this->Width) * 2 + (this->Height*this->Lenght) * 2 + (this->Height*this->Lenght) * 2;
}

void Parallelepiped::PrintName()
{
	std::cout << "This is Parallelepiped!" << std::endl;
}


Parallelepiped::~Parallelepiped()
{
}
