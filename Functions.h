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
#include "Shelter.h"
#include "AboveGround.h"
#include "UnderGround.h"
#include "Bunker.h"
#include "ControlTower.h"
#include "Barracks.h"
#include "Tunnel.h"
#define NO_OF_CHARS 256

namespace N
{
	void readShelterFile(std::string fileName, std::vector<Shelter*>& inputArr);

	void writeShelterFile(std::string fileName, std::vector<Shelter*>& p);

	void merge(std::vector<Shelter*>& a, std::vector<Shelter*>& tmpArray, int leftPos, int rightPos, int rightEnd);

	void mergeSort(std::vector<Shelter*>& a, std::vector<Shelter*>& tmpArray, int left, int right);

	void mergeSort(std::vector<Shelter*>& a);

	int aggregateAttack(std::vector<Shelter*>& p);

	int aggregateDefense(std::vector<Shelter*>& p);
}