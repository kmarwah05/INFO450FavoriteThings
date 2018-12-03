#include "Drone.h"

//Default constructor 
Drone::Drone()
{
	brand = "";
	color = "";
	feature = "";
	price = 0;
	rating = 0;
}

string Drone::getDroneBrand()
{
	return brand;
}

string Drone::getDroneColor()
{
	return color;
}

void Drone::getDrone()
{
	cin.clear();
	cin.ignore();

	cout << "\n\Enter your favorite drone brand: ";
	getline(cin, brand);

	cout << "\n\nEnter your favorite drone color: ";
	getline(cin, color);

	cout << "\n\nEnter your favorite drone feature: ";
	getline(cin, feature);

	cout << "\n\nHow much does it cost? : ";
	cin >> price;

	cout << "\n\nEnter your favorite drone rating: ";
	cin >> rating;


	cout << "\t\t    ==========================================================" << endl;
	cout << "\t\t    |---- YOUR DATA HAS BEEN STORED INTO THE APPLICATION ----|" << endl;
	cout << "\t\t    ==========================================================" << endl << endl << endl;
}

ostream& operator<< (ostream&o, const Drone& drone)
{
	o << "\t\t    =================================================" << endl;
	o << "\t\t    |---- YOUR DRONE COLLECTION DATA INCLUDES:  ----|" << endl;
	o << "\t\t    |                   **************              |" << endl;
	o << "\t\t    |                     ********                  |" << endl;
	o << "\t\t    |                       ****                    |" << endl;
	o << "\t\t    |      Brand: " << drone.brand <<     "\t\t                    |" << endl;
	o << "\t\t    |      Color: " << drone.color <<     "\t\t                    |" << endl;
	o << "\t\t    |      Feature: " << drone.feature << "\t\t                    |" << endl;
	o << "\t\t    |      Price: " << drone.price <<     "\t\t                    |" << endl;
	o << "\t\t    |      Rating: " << drone.rating <<   "\t\t                    |" << endl;
	o << "\t\t    |                       ****                    |" << endl;
	o << "\t\t    |                     ********                  |" << endl;
	o << "\t\t    |                   **************              |" << endl;
	o << "\t\t    =================================================" << endl << endl << endl;

	return o;
}

