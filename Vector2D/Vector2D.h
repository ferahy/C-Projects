/*
	Yilmaz, Ferah

	CS A250
	March 3, 2019

	Lab 5
*/

#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <iostream>
using namespace std;

class Vector2D
{
	friend ostream& operator<<(ostream& out, const Vector2D& v);

public:
	Vector2D() : x(0), y(0) {}
	Vector2D(int, int);

	int operator*(const Vector2D&) const;
	bool operator==(const Vector2D&) const;

	~Vector2D();

private:
	int x;
	int y;
};

#endif
