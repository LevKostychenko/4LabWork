#pragma once
#include "Shape.h"

class TwoDShape : Shape
{
public:
	TwoDShape();
	virtual ~TwoDShape(); 

	virtual double GetPerimeter() { return 0; };
};

