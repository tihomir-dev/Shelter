#pragma once
#include "AboveGround.h"
class ControlTower :
	public AboveGround
{
public: 
	ControlTower();
	ControlTower(double seismicAct, double str, int age, AtmosphericCondition atmCon, int capacity, int yearsPrac,
		int secretEntr,int visab, int snipersCap);
	int effectiveAttack();
	int effectiveDefense();
	int getVisability();
	void setVisability(int visab);
	int getSnipersCapacity();
	void setSnipersCapacity(int snipersCap);
protected:
	int visability; 
	int snipersCapacity;
};

