#include "Functions.h"

void N::readShelterFile(std::string fileName, std::vector<Shelter*>& inputArr)
{
	std::ifstream inputFile(fileName);
	std::string tmpString, token;
	std::vector<std::string> parameters;
	std::istringstream ss;
	std::cout << "Each of the following lines will instantiate objects of the respective class: " << std::endl;
	while (!inputFile.eof())
	{
		getline(inputFile, tmpString);
		ss.str(tmpString);
		while (getline(ss, token, ','))
		{
			parameters.push_back(token);
		}
		for (int i = 0; i < parameters.size(); i++)
		{
			std::cout << parameters[i] << ' ';
		}

		switch (parameters[0][0])
		{
		case 'B':
			inputArr.push_back(new Bunker(stod(parameters[1]),
				stod(parameters[2]), stoi(parameters[3]), static_cast<AtmosphericCondition>(stoi(parameters[4])),
				stoi(parameters[5]), stod(parameters[6]), stod(parameters[7]), stoi(parameters[8]), stoi(parameters[9])));
			ss.clear();
			parameters.clear();
			break;
		case 'X':
			inputArr.push_back(new Barracks(stod(parameters[1]),
				stod(parameters[2]), stoi(parameters[3]), static_cast<AtmosphericCondition>(stoi(parameters[4])),
				stoi(parameters[5]), stoi(parameters[6]), stoi(parameters[7]), stoi(parameters[8]), stoi(parameters[9])));
			ss.clear();
			parameters.clear();
			break;
		case 'T':
			inputArr.push_back(new Tunnel(stod(parameters[1]),
				stod(parameters[2]), stoi(parameters[3]), static_cast<AtmosphericCondition>(stoi(parameters[4])),
				stoi(parameters[5]), stod(parameters[6]), stod(parameters[7]), stoi(parameters[8]), stoi(parameters[9])));
			ss.clear();
			parameters.clear();
			break;
		case 'C':
			inputArr.push_back(new ControlTower(stod(parameters[1]),
				stod(parameters[2]), stoi(parameters[3]), static_cast<AtmosphericCondition>(stoi(parameters[4])),
				stoi(parameters[5]), stoi(parameters[6]), stoi(parameters[7]), stoi(parameters[8]), stoi(parameters[9])));
			ss.clear();
			parameters.clear();
			break;
		default:
			break;
		}
		std::cout << std::endl;
		ss.clear();
		parameters.clear();
	}
	inputFile.close();
}

void N::writeShelterFile(std::string fileName, std::vector<Shelter*>& p)
{
	std::ofstream outputFile;
	outputFile.open(fileName, std::ios::app);
	outputFile << "Get total effective attack: " << aggregateAttack(p) << " attacks" << std::endl
		<< "Get total effective defense: " << aggregateDefense(p) << " defenses" << std::endl
		<< "---------------------------------" << std::endl << std::endl;
	std::cout << "File writing complete" << std::endl;
	outputFile.close();
}

void N::merge(std::vector<Shelter*>& a, std::vector<Shelter*>& tmpArray, int leftPos, int rightPos, int rightEnd)
{
	int leftEnd = rightPos - 1;
	int tmpPos = leftPos;
	int numElements = rightEnd - leftPos + 1;
	while (leftPos <= leftEnd && rightPos <= rightEnd)
		if (a[leftPos]->effectiveAttack() <= a[rightPos]->effectiveAttack()) //apply processing case
			tmpArray[tmpPos++] = a[leftPos++];
		else
			tmpArray[tmpPos++] = a[rightPos++];
	while (leftPos <= leftEnd)
		tmpArray[tmpPos++] = a[leftPos++];
	while (rightPos <= rightEnd)
		tmpArray[tmpPos++] = a[rightPos++];
	for (int i = 0; i < numElements; i++, rightEnd--)
		a[rightEnd] = tmpArray[rightEnd];
}

void N::mergeSort(std::vector<Shelter*>& a, std::vector<Shelter*>& tmpArray, int left, int right)
{
	if (left < right)
	{
		int center = (left + right) / 2;
		mergeSort(a, tmpArray, left, center);
		mergeSort(a, tmpArray, center + 1, right);
		merge(a, tmpArray, left, center + 1, right);
	}
}

void N::mergeSort(std::vector<Shelter*>& a)
{
	std::vector<Shelter*> tmpArray(a.size());
	mergeSort(a, tmpArray, 0, a.size() - 1);
}


int N::aggregateAttack(std::vector<Shelter*>& p)
{
	int total = 0;

	for (Shelter* s : p)
	{
		total += s->effectiveAttack();
	}

	return total;
}

int N::aggregateDefense(std::vector<Shelter*>& p)
{
	int total = 0;

	for (Shelter* s : p)
	{
		total += s->effectiveDefense();
	}

	return total;
}