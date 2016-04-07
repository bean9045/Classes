#ifndef INCLASSTESTCLASSHEADER_H_
#define INCLASSTESTCLASSHEADER_H_

#include <iostream>

using namespace std;

const int ORC_NUM_WEAPONS = 3; //constant ints have to be defined globally.

class Orc
{
  private:
	void init();

	int health;
	int strength;
	int size;

	string color;
	string name;

	string weapons[ORC_NUM_WEAPONS];

  public:
	Orc();
	Orc(int health);

	~Orc();

	int getHealth();
	void setHealth(int health);

	int getStrength();
	void setStrength(int strength);

	int getSize();
	void setSize(int size);

	string getColor();
	void setColor(string color);

	string getName();
	void setName(string name);

	string getWeapons(int index); //but why?
	void setWeapons(int index, string weapon);
};

#endif
