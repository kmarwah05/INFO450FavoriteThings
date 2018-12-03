#include <iostream>
#include "DroneList.h"
using namespace std;

int main()
{

	cout << "\t\t    =====================================" << endl;
	cout << "\t\t    |---- ADD YOUR FAVORITE DRONES  ----|" << endl;
	cout << "\t\t    =====================================" << endl << endl << endl;

	DroneList myDroneList;
	bool addDrone = true;

	do
	{
		char option;
		myDroneList.addDrone();
		if (myDroneList.getCollectionSize() >= 100)
		{
			addDrone = false;
			break;
		}
		cout << "\t\t    =====================================================" << endl;
		cout << "\t\t    |---- Would you like to add another drone? (Y)  ----|" << endl;
		cout << "\t\t    |---- Hit 'N' to exit the program               ----|" << endl;
		cout << "\t\t    =====================================================" << endl << endl << endl;

		cin >> option;
		cout << endl;
		
		if (option == 'Y' || option == 'y')
		{
			cout << endl;
			cout << "\t\t    ============================================" << endl;
			cout << "\t\t    |---- ADDING DRONE TO THE APPLICATION  ----|" << endl;
			cout << "\t\t    ============================================" << endl << endl << endl;
			addDrone = true;
		}
		else
		{
			addDrone = false;
		}
	} while (addDrone == true);

	myDroneList.printList();
	system("pause");
	return 0;
}