#pragma once
#include "Shelter.h"
class AboveGround :
	public Shelter
{
public:
	AboveGround();
	AboveGround(double seismicAct, double str, int age, AtmosphericCondition atmCon, int capacity, int yearsPrac,
		int secretEntr);
	int getYearsPracticable();
	void setYearsPracticable(int yearsPr);
	int getSecretEntrances();
	void setSecretentrances(int secretEntr);
	int calculateSafety();


protected:
	int yearsPracticable; 
	int secretEntrances; 
};

