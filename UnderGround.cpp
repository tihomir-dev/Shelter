#include "UnderGround.h"

UnderGround::UnderGround() : Shelter(), depth(0.0), area(0.0) {};
UnderGround::UnderGround(double seismicAct, double str, int age, AtmosphericCondition atmCon, int capacity,
	double dep, double ar) : Shelter(seismicAct, str, age, atmCon, capacity), depth(dep), area(ar) {};

double UnderGround::getDepth()const
{
	return depth;
}
void UnderGround::setDepth(double dep) 
{
	depth = dep;
}
double UnderGround::getArea()const
{
	return area;
}
void UnderGround::setArea(double ar)
{
	area = ar;
}