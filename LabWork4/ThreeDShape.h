#pragma once
#include "Shape.h" 

class ThreeDShape : Shape
{
public:
	ThreeDShape();
	virtual ~ThreeDShape();

	virtual double GetVolume() { return 0; }
};

