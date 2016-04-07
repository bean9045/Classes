#include "inClassTestClassHeader.h"

Orc::Orc()
{
	cout << "UGGA BUGGA!" << endl;
	init();
}

Orc::Orc(int health)
{
	cout << "OOOGGAA BOOGAA!" << endl;
	init();

	this->health = health;
}

Orc::~Orc()
{
	cout << endl << "AAARRRRRGHGGHHH!!! IM DED." << endl << endl;
}

void Orc::init()
{
	health = 100;
	strength = 10;
	size = 7;

	color = "Green";
	name = "URK!";

	weapons[0] = "Club";
	weapons[1] = "Axe";
	weapons[2] = "Spear";
}

int Orc::getHealth()
{
	return health;
}
void Orc::setHealth(int health)
{
	this->health = health;
}

int Orc::getStrength()
{
	return strength;
}
void Orc::setStrength(int strength)
{
	this->strength = strength;
}

int Orc::getSize()
{
	return size;
}
void Orc::setSize(int size)
{
	this->size = size;
}

string Orc::getColor()
{
	return color;
}
void Orc::setColor(string color)
{
	this->color = color;
}

string Orc::getName()
{
	return name;
}
void Orc::setName(string name)
{
	this->name = name;
}

string Orc::getWeapons(int index)
{
	return weapons[index];
}
void Orc::setWeapons(int index, string weapon)
{
	this->weapons[index] = weapon;
}
