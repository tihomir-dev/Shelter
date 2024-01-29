#include "Tunnel.h"
Tunnel::Tunnel() : UnderGround(), radioActiveSystems(0), inventoriesForVehicles(0) {};
Tunnel::Tunnel(double seismicAct, double str, int age, AtmosphericCondition atmCon, int capacity, double dep, double ar,
	int radioActSys, int inventoriesForVeh) : UnderGround(seismicAct, str, age, atmCon, capacity, dep, ar), radioActiveSystems(radioActSys),
	inventoriesForVehicles(inventoriesForVeh) {};

int Tunnel::effectiveAttack()
{
	int tunnelEffectiveAttack = 0; 
	tunnelEffectiveAttack = (capacity + depth + inventoriesForVehicles) / 3; 
	return tunnelEffectiveAttack;
}
int Tunnel::effectiveDefense()
{
	int tunnelEffectiveDefense = 0; 
	tunnelEffectiveDefense = (strength + depth + radioActiveSystems) / 3;
	return tunnelEffectiveDefense;
}
int Tunnel::getRadioActiveSystems()
{
	return radioActiveSystems;
}
void Tunnel::setRadioActiveSystems(int radioActSys)
{
	radioActiveSystems = radioActSys;
}
int Tunnel::getInventoriesForVehicles()
{
	return inventoriesForVehicles;
}
void Tunnel::setInventoriesForVehicles(int inventoriesForVeh)
{
	inventoriesForVehicles = inventoriesForVeh;
}