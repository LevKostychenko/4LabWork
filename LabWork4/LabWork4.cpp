// LabWork4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Shape.h"
#include "Circle.h"
#include "Triangle.h"
#include "Parallelepiped.h"
#include "Cylinder.h"

int main()
{
	Point aCircle(2, 4);
	Point bCircle(2, 1);
	Circle circle(aCircle, bCircle);
	circle.PrintName();
	std::cout << circle.GetArea() << "\n";
	std::cout << circle.GetPerimeter() << "\n";
	
	Point aTriangle(2, 4);
	Point bTriangle(2, 1);
	Point cTriangle(0, 4);
	Triangle triangle(aTriangle, bTriangle, cTriangle);
	triangle.PrintName();
	std::cout << triangle.GetArea() << "\n";
	std::cout << triangle.GetPerimeter() << "\n";

	Point aCyl(2, 4);
	Point bCyl(2, 1);
	Point cCyl(0, 4);
	Cylinder cyl(aCyl, bCyl, cCyl);
	cyl.PrintName();
	std::cout << cyl.GetArea() << "\n";
	std::cout << cyl.GetVolume() << "\n";

	Point aPar(2, 4);
	Point bPar(2, 1);
	Point cPar(0, 4);
	Point dPar(6, 7);
	Parallelepiped par(aPar, bPar, cPar, dPar);
	par.PrintName();
	std::cout << par.GetArea() << "\n";
	std::cout << par.GetVolume() << "\n";
}
