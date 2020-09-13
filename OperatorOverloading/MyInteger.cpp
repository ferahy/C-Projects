/*
	Yilmaz, Ferah

	September 28, 2019

	CS A250
	Lab 5
*/

#include "MyInteger.h"
#include <cmath>
using namespace std;

// Default constructor
MyInteger::MyInteger()
{
	num = 0;
}

// Overloaded constructor
MyInteger::MyInteger(int newNum)
{
	num = newNum;
}

// Definition function setInt
void MyInteger::setInt(int newNum)
{
	num = newNum;
}

// Definition function getInt
int MyInteger::getInt() const
{
	return num;
}

// Definition operator []
int MyInteger::operator[](int index) 
{
	int number = num;
	int value = 0;
	
	number = number / (pow(10, (index)));
	value = number % 10;

	return value;
}

// Definition function intLength
int MyInteger::intLength() const
{
	int length = 0;
	int number = num;

	while (number != 0)
	{
		number = number / 10;
		++length;
	}

	return length;
}

// Destructor
MyInteger::~MyInteger() {}