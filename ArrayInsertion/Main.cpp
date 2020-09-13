/*
	Yilmaz, Ferah

	August 29, 2019

	CS A250
	Lab 1
*/

#include <iostream>
using namespace std;

const int CAPACITY = 10;

// Declaration function insertAtIndex
// Your code here...
void insertAtIndex(int a[], int& numOfElements, int element, int index);

#include "Testing.hxx"

int main( )
{
	testCases();

	cout << endl;
	system("Pause");
    return 0;
}

// Definition function insertAtIndex
//Your code here...
void insertAtIndex(int a[], int& numOfElements, int element, int index)
{
	if (numOfElements == CAPACITY)
		cerr << "Array is full.Cannot insert another element." << endl;
	else if (index >= CAPACITY)
		cerr << "The array cannot have more than " << CAPACITY << " elements."
		<< endl;
	else if (index > numOfElements)
		cerr << "You can only insert contigious elements in array." << endl;
	else
	{
		for (int i = numOfElements - 1; i >= index; --i)
			a[i + 1] = a[i];

		a[index] = element; 
		++numOfElements;
	}

}
