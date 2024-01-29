#include <iostream>
#include <vector>
#include "Shelter.h"
#include "Functions.h"
using namespace std;

int main()
{
	vector<Shelter*> Shelters;
	char c;

	string fileName;
	cout << "Enter file name to read: ";
	cin >> fileName;
	N::readShelterFile(fileName, Shelters);

	do
	{
		cout << "Would you like to merge sort Shelters based on effective attack? (Y/N): ";
		cin >> c;
		switch (c)
		{
		case 'Y':
			N::mergeSort(Shelters);
			break;
		case 'N':
			break;
		default:
			cout << "ERROR: Enter correct input (Y/N)!" << endl;
			break;
		}
	} while (c != 'Y' && c != 'N');

	cout << "Enter file name to write: ";
	cin >> fileName;
	N::writeShelterFile(fileName, Shelters);

	return 0;
}