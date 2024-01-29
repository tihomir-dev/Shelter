#pragma once
#include "UnderGround.h"
class Bunker :
	public UnderGround
{
public:
	Bunker();
	Bunker(double seismicAct, double str, int age, AtmosphericCondition atmCon, int capacity, double dep, double ar,
		int antiFireSys, int antiTankMin);
	int effectiveAttack();
	int effectiveDefense();
	int getAntiFireSystems();
	void setAntiFireSystems(int antiFireSys);
	int getAntiTankMines();
	void setAntiTankMines(int antiTankMin);
protected:
	int antiFireStystems; 
	int antiTankMines;
};

