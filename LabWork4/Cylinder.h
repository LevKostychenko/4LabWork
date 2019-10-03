#pragma once
#include "ThreeDShape.h"

class Cylinder : ThreeDShape
{
public:
	Cylinder(double xa, double ya, double za, 
		double xb, double yb, double zb, 
		double xc, double yc, double zc);
	Cylinder(Point a, Point b, Point c);
	~Cylinder();

public:
	double GetArea() override;
	double GetVolume() override;
	void PrintName() override;

public:
	double Radius{ 0 };
	double Height{ 0 };
};

