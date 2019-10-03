#pragma once
#include "TwoDShape.h"
#include "Point.h"

class Circle : TwoDShape
{
public:
	Circle(double x, double y, double xc, double yc);
	Circle(Point center, Point second);
	~Circle();
	
public:
	double GetArea() override;
	double GetPerimeter() override;
	void PrintName() override;

public:
	double Radius{ 0 };	
};

