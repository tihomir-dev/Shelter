#include <iostream>
#include <cstdlib>
#include <fstream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <string>
#include <sstream>
#include <iterator>
#include "Enums.h"
#pragma once
class Shelter
{
public:
	Shelter();
	Shelter(double seismicAct, double str, int age, AtmosphericCondition atmCon, int capacity);


	virtual int effectiveAttack() = 0;
	virtual int effectiveDefense() = 0;
	double getSeismicActivity() const;
	void setSeismicActivity(double seismicAct);
	double getStrength() const;
	void setStrength(double str);
	int getAge() const;
	void setAge(int age);
	AtmosphericCondition getAtmosphericCondition() const;
	void setAtmosphericCondition(AtmosphericCondition atmCon);
	int getCapacity() const; 
	void setCapacity(int capacity);


protected: 
	double seismicActivity; 
	double strength; 
	int age; 
	AtmosphericCondition atmCondition; 
	int capacity; 

};

