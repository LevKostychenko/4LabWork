#pragma once
#define _USE_MATH_DEFINES
#include "Point.h"
#include <math.h>
#include <iostream>

class Shape
{
public:
	Shape();
	virtual ~Shape();

	virtual void PrintName() {   }
	virtual double GetArea() { return 0; }
};

