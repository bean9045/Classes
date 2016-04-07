#include <iostream>

#include "inClassTestClassHeader.h"

int main()
{
	{ //these brackets are here to demonstrate how constructors and destructors work within scope.
		Orc urk;

		cout << "Urk's health is: " << urk.getHealth() << endl;
		cout << "Urk's strength is: " << urk.getStrength() << endl;
		cout << "Urk's size is: " << urk.getSize() << endl;

		cout << "Urk's color is: " << urk.getColor() << endl;
		cout << "Urk's name is: " << urk.getName() << endl;

		cout << "Urk's weapons are: " << flush;

		for (int k = 0; k < ORC_NUM_WEAPONS; k++)
		{
			cout << urk.getWeapons(k) << ", " << flush;
		}
	}

	//creating a new object with an overloaded constructor (health is defined in the parameter)

	Orc bigBertha(70);

	cout << "Big Bertha's health is: " << bigBertha.getHealth() << endl;

	bigBertha.setStrength(8);
	cout << "Big Bertha's strength is: " << bigBertha.getStrength() << endl;
	bigBertha.setSize(10);
	cout << "Big Bertha's size is: " << bigBertha.getSize() << endl;

	bigBertha.setColor("Yellow");
	cout << "Big Bertha's color is: " << bigBertha.getColor() << endl;
	bigBertha.setName("BIG BUFTA!");
	cout << "Big Bertha's name is: " << bigBertha.getName() << endl;

	bigBertha.setWeapons(0, "Rock");
	bigBertha.setWeapons(1, "Shahp stik");
	bigBertha.setWeapons(2, "Ded kat");

	cout << "Big Bertha's weapons are: " << flush;

	for (int k = 0; k < ORC_NUM_WEAPONS; k++)
	{
		cout << bigBertha.getWeapons(k) << ", " << flush;
	}

	return 0;
}
