#pragma once
#include "Shelter.h"
class UnderGround :
	public Shelter
{
public:
	UnderGround();
	UnderGround(double seismicAct, double str, int age, AtmosphericCondition atmCon, int capacity, double dep, double ar);
	double getDepth()const;
	void setDepth(double dep);
	double getArea()const;
	void setArea(double ar);


protected:
	double depth; 
	double area; 

};

