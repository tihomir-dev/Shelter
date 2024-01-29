#include "AboveGround.h"

AboveGround::AboveGround() : Shelter(), yearsPracticable(0), secretEntrances(0) {};

AboveGround::AboveGround(double seismicAct, double str, int age, AtmosphericCondition atmCon, int capacity, int yearsPrac,
	int secretEntr) : Shelter(seismicAct, str, age, atmCon, capacity),
	yearsPracticable(yearsPrac), secretEntrances(secretEntr) {};

int AboveGround::getYearsPracticable()
{
	return yearsPracticable;
}
void AboveGround::setYearsPracticable(int yearsPr) {
	yearsPracticable = yearsPr;
}
int AboveGround::getSecretEntrances()
{
	return secretEntrances;
}
void AboveGround::setSecretentrances(int secretEntr)
{
	secretEntrances = secretEntr;
}
int AboveGround::calculateSafety()
{
	int safety = 0;
	safety = yearsPracticable / secretEntrances;
	return safety;
}
