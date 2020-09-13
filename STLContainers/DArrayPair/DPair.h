/*
	Yilmaz, Ferah

	November 7, 2019

	CS A250
	Lab 8
*/

#ifndef DPAIR_H
#define DPAIR_H

#include <iostream>
#include <string>

using namespace std;

class DPair
{
	friend ostream& operator<<(ostream& out, const DPair& pair);

public:
	DPair();
	DPair(int newFirst, int newSecond);
	DPair(const DPair& otherPair);

	void setFirst(int newFirst);
	void setSecond(int newSecond);
	int getFirst() const;
	int getSecond() const;

	DPair& operator=(const DPair& otherP);

	~DPair();

private:
	int  first, *second;
};

#endif