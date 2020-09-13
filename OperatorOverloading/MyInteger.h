#ifndef MYINTEGER_H
#define MYINTEGER_H

#include <iostream>
#include <cstdlib>
#include <cmath>

class MyInteger
{
public:
	// Declarations
	MyInteger();
	MyInteger(int);
	int getInt() const;
	int intLength() const;
	int operator[](int);

	void setInt(int);
	~MyInteger();



private:
	int num;
};

#endif