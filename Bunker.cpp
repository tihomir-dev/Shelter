#include "Bunker.h"
Bunker::Bunker() : UnderGround(), antiFireStystems(0), antiTankMines(0) {};
Bunker::Bunker(double seismicAct, double str, int age, AtmosphericCondition atmCon, int capacity, double dep, double ar,
	int antiFireSys, int antiTankMin) : UnderGround(seismicAct, str, age,atmCon, capacity, dep, ar), antiFireStystems(antiFireSys),
	antiTankMines(antiTankMin) {};

int Bunker::effectiveAttack()
{
	int bunkerEffectiveAttack = 0; 
	bunkerEffectiveAttack = (capacity + depth + antiTankMines) / 3;
	return bunkerEffectiveAttack;
}
int Bunker::effectiveDefense()
{
	int bunkerEffectiveDefense = 0;
	bunkerEffectiveDefense = (strength + depth + antiFireStystems) / 3;
	return bunkerEffectiveDefense;
}
int Bunker::getAntiFireSystems() 
{
	return antiFireStystems;
}

void Bunker::setAntiFireSystems(int antiFireSys)
{
	antiFireStystems = antiFireSys;
}
int Bunker::getAntiTankMines()
{
	return antiTankMines;
}
void Bunker::setAntiTankMines(int antiTankMin)
{
	antiTankMines = antiTankMin;
}