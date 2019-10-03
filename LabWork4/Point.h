#pragma once
class Point
{
public:
	Point(double x, double y);
	Point(double x, double y, double z);
	~Point();

public:
	double X{ 0 };
	double Y{ 0 };
	double Z{ 0 };
};

