#pragma once
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Max drone items entered
const int MAXDRONE = 5;

class Drone
{
private:
	string brand;
	string color;
	string feature;
	double price;
	int rating;

public:
	Drone();
	void getDrone();
	string getDroneBrand();
	string getDroneColor();

	friend ostream & operator << (ostream &o, const Drone &drone);
};
