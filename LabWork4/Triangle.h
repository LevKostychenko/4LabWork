#pragma once
#include "TwoDShape.h"

class Triangle : TwoDShape
{
public:
	Triangle(double ax, double ay, double bx, double by, double cx, double cy);
	Triangle(Point a, Point b, Point c);
	~Triangle();

public:
	double Radius;
	double GetArea() override;
	double GetPerimeter() override;
	void PrintName() override;

public:
	double A{ 0 };
	double B{ 0 };
	double C{ 0 };
};

