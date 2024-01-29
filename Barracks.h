#pragma once
#include "AboveGround.h"
class Barracks :
	public AboveGround
{
public:
	Barracks();
	Barracks(double seismicAct, double str, int age, AtmosphericCondition atmCon, int capacity, int yearsPrac,
		int secretEntr, int roomsForWep, int bedsForInj);
	int effectiveAttack();
	int effectiveDefense();
	int getRoomsForWeapons();
	void setRoomsForWeapons(int roomsForWep);
	int getBedsForInjured();
	void setBedsForInjured(int bedsForInj);
protected: 
	int roomsForWeapons;
	int bedsForInjured;

};

