#pragma once
#include "ThreeDShape.h"

class Parallelepiped : ThreeDShape
{
public:
	Parallelepiped(double xa, double ya, double za,
		double xb, double yb, double zb,
		double xc, double yc, double zc,
		double xd, double yd, double zd);

	Parallelepiped(Point a, Point b, Point c, Point d);
	~Parallelepiped();

public:
	double GetArea() override;
	double GetVolume() override;
	void PrintName() override;

public: 
	double Height{ 0 };
	double Width{ 0 };
	double Lenght{ 0 };
};

