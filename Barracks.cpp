#include "Barracks.h"
Barracks::Barracks() : AboveGround(), roomsForWeapons(0), bedsForInjured(0) {};
Barracks::Barracks(double seismicAct, double str, int age, AtmosphericCondition atmCon, int capacity, int yearsPrac,
	int secretEntr, int roomsForWep, int bedsForInj) : AboveGround(seismicAct, str, age, atmCon, capacity, yearsPrac,
		secretEntr), roomsForWeapons(roomsForWep), bedsForInjured(bedsForInj) {};

int Barracks::effectiveAttack()
{
	int barracksSffectiveAttack = 0; 
	barracksSffectiveAttack = (capacity + yearsPracticable + roomsForWeapons) / 3;
	return barracksSffectiveAttack;
}
int Barracks::effectiveDefense()
{
	int barracksEffectiveDefense = 0; 
	barracksEffectiveDefense = (strength + secretEntrances + bedsForInjured) / 3;
	return barracksEffectiveDefense;
	
}
int Barracks::getRoomsForWeapons()
{
	return roomsForWeapons;
}
void Barracks::setRoomsForWeapons(int roomsForWep)
{
	roomsForWeapons = roomsForWep;
}
int Barracks::getBedsForInjured()
{
	return bedsForInjured;
}
void Barracks::setBedsForInjured(int bedsForInj)
{
	bedsForInjured = bedsForInj;
}