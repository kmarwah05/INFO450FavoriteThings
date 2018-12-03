#include "DroneList.h"

DroneList::DroneList()
{
	droneCollection = 0;
}

bool DroneList::findDrone(Drone drone)
{
	for (int i = 0; i < droneCollection; i++)
	{
		if (drone.getDroneBrand() == droneList[i].getDroneBrand())
		{
			cout << "Drone " << droneList[i].getDroneBrand() << " already exist in the application!" << endl;
			cout << "Please enter a different brand" << endl;
			cout << endl;
			return false;
		}
	}
	return true;
}

int DroneList::addDrone()
{
	Drone addNewDrone;
	addNewDrone.getDrone();
	if (findDrone(addNewDrone))
	{
		droneList[droneCollection] = addNewDrone;
		droneCollection++;
		return 0;
	}
	else
	{
		return MAXDRONE;
	}
}

int DroneList::getCollectionSize()
{
	return droneCollection;
}

void DroneList::printList()
{
	for (int i = 0; i < droneCollection; i++)
	{
		cout << droneList[i];
		cout << endl << endl;
	}
}
