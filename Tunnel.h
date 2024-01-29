#pragma once
#include "UnderGround.h"
class Tunnel :
	public UnderGround
{
public:
	Tunnel();
	Tunnel(double seismicAct, double str, int age, AtmosphericCondition atmCon, int capacity, double dep, double ar, 
		int radioActSys, int inventoriesForVeh);
	int effectiveAttack();
	int effectiveDefense();
	int getRadioActiveSystems();
	void setRadioActiveSystems(int radioActSys);
	int getInventoriesForVehicles();
	void setInventoriesForVehicles(int inventoriesForVeh);
protected:
	int radioActiveSystems; 
	int inventoriesForVehicles;
};

