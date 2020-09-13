/*
	Yilmaz, Ferah

	November 7, 2019

	CS A250
	Lab 10
*/

#include <iostream>
#include "HotDogStand.h"

using namespace std;

int main()
{
	HotDogStand s1;
	s1.setID(111);
	s1.setStandStart(100);

	HotDogStand
		s2(222, 200),
		s3(333, 300),
		s4(444, 400);

	for (int i = 0; i < 56; ++i) { s1.justSold(); }
	for (int i = 0; i < 130; ++i) { s2.justSold(); }
	for (int i = 0; i < 121; ++i) { s3.justSold(); }
	for (int i = 0; i < 343; ++i) { s4.justSold(); }

	cout << "Stand 1" << endl;
	cout << "Stand ID: " << s1.getID() << endl;
	cout << "Hot dogs sold: " << s1.getStandSales() << endl;
	cout << "\nStand 2" << endl;
	cout << "Stand ID: " << s2.getID() << endl;
	cout << "Hot dogs sold: " << s2.getStandSales() << endl;
	cout << "\nStand 3" << endl;
	cout << "Stand ID: " << s3.getID() << endl;
	cout << "Hot dogs sold: " << s3.getStandSales() << endl;
	cout << "\nStand 4" << endl;
	cout << "Stand ID: " << s4.getID() << endl;
	cout << "Hot dogs sold: " << s4.getStandSales() << endl;

	cout << "\n=> Total sold = " << HotDogStand::getAllSales()
		<< " hot dogs" << endl;

	cout << "\n=> Current inventory = " << HotDogStand::getInventory()
		<< " hot dogs" << endl;

	cout << endl;
	system("Pause");
	return 0;
}