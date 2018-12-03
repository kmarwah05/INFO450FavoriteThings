#pragma once
#include "Drone.h"

class DroneList
{
private:
	Drone droneList[100];
	int droneCollection;

public:
	DroneList();
	int addDrone();
	bool findDrone(Drone drone);
	int getCollectionSize();
	void printList();
};