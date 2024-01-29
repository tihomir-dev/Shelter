#include "ControlTower.h"
ControlTower::ControlTower() : AboveGround(), visability(0), snipersCapacity(0) {};
ControlTower::ControlTower(double seismicAct, double str, int age, AtmosphericCondition atmCon, int capacity, int yearsPrac,
	int secretEntr, int visab, int snipersCap) : AboveGround(seismicAct, str, age, atmCon, capacity, yearsPrac,
		secretEntr), visability(visab), snipersCapacity(snipersCap) {};

int ControlTower::effectiveAttack()
{
	int controlTowerEffectiveAttack = 0; 
	controlTowerEffectiveAttack = (yearsPracticable + snipersCapacity + capacity) / 3;
	return controlTowerEffectiveAttack;
}
int ControlTower::effectiveDefense()
{
	int controlTowerEffectiveDefense = 0;
	controlTowerEffectiveDefense = (strength + secretEntrances + visability) / 3;
	return controlTowerEffectiveDefense;
}
int ControlTower::getVisability()
{
	return visability;
}
void ControlTower::setVisability(int visab)
{
	visability = visab;
}
int ControlTower::getSnipersCapacity()
{
	return snipersCapacity;
}
void ControlTower::setSnipersCapacity(int snipersCap)
{
	snipersCapacity = snipersCap;
}
