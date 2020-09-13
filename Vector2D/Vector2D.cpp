/*
	Yilmaz, Ferah

	CS A250
	March 3, 2019

	Lab 5
*/

#include "Vector2D.h"

Vector2D::Vector2D(int newX, int newY)
{
	x = newX;
	y = newY;
}

int Vector2D::operator*(const Vector2D& otherVector) const
{
	return (x * otherVector.x) + (y * otherVector.y);
}

bool Vector2D::operator==(const Vector2D& otherVector) const
{
	return (x == otherVector.x && y == otherVector.y);
}

ostream & operator<<(ostream & out, const Vector2D & v)
{
	out << "<" << v.x << "," << v.y << ">" << endl;

	return out;
}

Vector2D::~Vector2D()
{}