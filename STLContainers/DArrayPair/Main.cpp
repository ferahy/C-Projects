/*
	Yilmaz, Ferah

	November 7, 2019

	CS A250
	Lab 8
*/

#include "DPair.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	DPair pair1(3, 6);
	DPair pair2(4, 8);

	cout << "Testing Overloaded Assignment " << endl;
	cout << " Pair 1 : " << pair1 << endl;
	cout << " Pair 2 : " << pair2 << endl;
	cout << endl;

	//test copy constructor
	cout << "Testing the Copy Constructor" << endl;
	DPair otherPair(pair2);
	cout << "Other Pair : " <<  otherPair << endl;
	cout << "Pair 2 : " <<  pair2 << endl;
	//test shallow copies
	cout << "Testing shallow copies" << endl;
	pair2.setFirst(30);
	pair2.setSecond(40);
	cout << "Other Pair : " << otherPair << endl;
	cout << endl;

	cout << "Testing the Assignment Operator" << endl;
	//test assignment operator
	otherPair = pair1;
	cout << "Pair 1 : " << pair1 << endl;
	cout << "Other Pair : " << otherPair << endl;
	cout << "Testing shallow copies" << endl;
	//test shallow copies
	pair1.setFirst(50);
	pair1.setSecond(60);
	cout << "Other Pair : " << otherPair << endl;
	cout << endl;

	// Test which one will be invoked (assignment operator vs copy constructor)
	cout << "Testing if assignment operator or the copy constructor will be invoked" << endl;
	DPair newPair(10, 20);
	DPair newPair1 = newPair;
	cout << "New Pair : " << newPair1 <<  endl;
	//test shallow copies
	newPair.setFirst(70);
	newPair.setSecond(80);
	cout << "Testing shallow copies" << endl;
	cout << "New Pair : " << newPair << endl;

	// Destructor
	newPair1.~DPair();

	cout << endl;
	system("Pause");
	return 0;
}