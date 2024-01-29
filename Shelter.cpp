#include "Shelter.h"

Shelter::Shelter() {
	seismicActivity = 0.0;
	strength = 0.0;
	age = 0;
	atmCondition = NONE;
	capacity = 0;
};

Shelter::Shelter(double seismicAct, double str, int Age, AtmosphericCondition atmCon, int capac) {
	seismicActivity = seismicAct;
	strength = str;
	age = Age;
	atmCondition = atmCon;
	capacity = capac;
};
double Shelter::getSeismicActivity()const
{
	return seismicActivity;
}
void Shelter::setSeismicActivity(double seismicAct)
{
	seismicActivity = seismicAct;
}
double Shelter::getStrength()const
{
	return strength;
}
void Shelter::setStrength(double str)
{
	strength = str;
}
int Shelter::getAge()const
{
	return age;
}
void Shelter::setAge(int age) 
{
	age = age;
}
AtmosphericCondition Shelter::getAtmosphericCondition()const
{
	return atmCondition;
}
void Shelter::setAtmosphericCondition(AtmosphericCondition atmCon)
{
	atmCondition = atmCon;
}
int Shelter::getCapacity()const
{
	return capacity;
}
void Shelter::setCapacity(int capacity) {
	capacity = capacity;
}