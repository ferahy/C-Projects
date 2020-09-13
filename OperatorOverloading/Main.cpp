/*
	(name header)
*/

#include "MyInteger.h"

#include <iostream>
using namespace std;

int main()
{
	cout << "Enter an integer: ";
	int num = -1;
	cin >> num;

	MyInteger myInt(num);
	int length = myInt.intLength();

	int i = 0;	
	do
	{
		cout << "\nEnter an index (or a negative number to quit): ";
		cin >> i;
		if (i >= length)
		{
			cout << "Index is out of bounds. Try again." << endl;
			i = 0;
		}
		else if (i > -1)
		{
			cout << "Digit at index " << i
				<< " is " << myInt[i] << endl;
		}
	}while (i > -1);

	cout << endl;
	system("Pause");
	return 0;
}

