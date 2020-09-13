/*
	Yilmaz, Ferah

	November 7, 2019

	CS A250
	Lab 10
*/

#include "HotDogStand.h"

int HotDogStand::totalSold = 0;
int HotDogStand::totalStored = 4000;

HotDogStand::HotDogStand()
{
	numSold = 0;
	id = 0;
	start = 0;
}

HotDogStand::HotDogStand(int newID, int newStart)
{
	id = newID;
	start  = newStart;
	numSold = 0;
}

void HotDogStand::setID(int newID)
{
	id = newID;
}

void HotDogStand::setStandStart(int newStart)
{
	start = newStart;
}

int HotDogStand::getID() const
{
	return id;
}

int HotDogStand::getStandSales() const
{
	return numSold;
}

void HotDogStand::justSold()
{
	++numSold;
	++totalSold;
}

int HotDogStand::getInventory()
{
	return (totalStored - totalSold);
}

int HotDogStand::getAllSales() 
{
	return totalSold;
}

HotDogStand::~HotDogStand() 
{
	totalSold -= numSold;
}
