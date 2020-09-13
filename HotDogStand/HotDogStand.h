/*
	Yilmaz, Ferah

	November 7, 2019

	CS A250
	Lab 10
*/

#ifndef HOTDOGSTAND_H
#define HOTDOGSTAND_H

#include <iostream>

using namespace std;

class HotDogStand
{
	static int totalSold;
	static int totalStored;
public:
	HotDogStand();
	HotDogStand(int newID, int newStart);

	void setID(int newID);
	void setStandStart(int newStart);

	int getID() const;
	int getStandSales() const;

	void justSold();

	static int getInventory();
	static int getAllSales();

	~HotDogStand();

private:
	int numSold;
	int id;
	int start;
};

#endif