/*
	Yilmaz, Ferah

	November 7, 2019

	CS A250
	Lab 8
*/

#include "DPair.h"

ostream& operator<<(ostream& out, const DPair& pair)
{
	out << "(" << pair.first << ", " << *pair.second << ")";
	return out;
}

DPair::DPair()
{
	first = 0;
	second = new int;
	*second = 0;
}

DPair::DPair(int newFirst, int newSecond)
{
	first = newFirst;
	second = new int;
	*second = newSecond;
}

DPair::DPair(const DPair& other)
{
	first = other.first;
	second = new int;
	*second = *other.second;
}

void DPair::setFirst(int newFirst) 
{
	first = newFirst;
}

void DPair::setSecond(int newSecond)
{
	*second = newSecond;
}

int DPair::getFirst() const
{
	return first;
}

int DPair::getSecond() const
{
	return *second;
}

DPair& DPair::operator=(const DPair& otherP)
{
	if (this == &otherP)
	{
		cerr << "Assigns to itself." << endl;
	}
	else
	{
		first = otherP.first;
		*second = *otherP.second;
	}
	return *this;
}

DPair::~DPair()
{
	delete second;
	second = nullptr;
}