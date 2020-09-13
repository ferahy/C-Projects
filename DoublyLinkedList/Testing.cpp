#include "DoublyList.h"

using namespace std;

void functionCall(DoublyList& list1, DoublyList& list2,
	const string& func, int& elem)
{
	// NOTE: Having a sequence of IF statements instead of
	// IF/ELSE is inefficient. This function is implemented
	// this way for testing purposes.
	if (func == "print") list1.print();
	if (func == "reversePrint") list1.reversePrint();
	if (func == "front") elem = list1.front();
	if (func == "back") elem = list1.back();
	if (func == "transferList") list1.transferList(list2);
}

void testPrint()
{
	int elem = 0;
	DoublyList myList, emptyList; //emptyList is a dummy object

	for (int i = 1; i < 7; ++i)
		myList.insertBack(i);

	cout << "TESTING: print()"
		<< "\nEXPECTED OUTPUT: 1 2 3 4 5 6";
	cout << "\n    YOUR OUTPUT: ";
	functionCall(myList, emptyList, "print", elem);
}

void testReversePrint()
{
	int elem = 0;
	DoublyList myList, emptyList; //emptyList is a dummy object

	for (int i = 1; i < 7; ++i)
		myList.insertBack(i);

	cout << "\n\nTESTING: reversePrint()"
		<< "\nEXPECTED OUTPUT: 6 5 4 3 2 1";
	cout << "\n    YOUR OUTPUT: ";
	functionCall(myList, emptyList, "reversePrint", elem);
}

void testFront()
{
	int elem = 0;
	DoublyList myList, emptyList; //emptyList is a dummy object

	for (int i = 1; i < 7; ++i)
		myList.insertBack(i);

	cout << "\n\nTESTING: front()"
		<< "\nEXPECTED OUTPUT: 1";
	cout << "\n    YOUR OUTPUT: ";
	int frontElem = 0;
	functionCall(myList, emptyList, "front", frontElem);
	cout << frontElem;
}

void testBack()
{
	int elem = 0;
	DoublyList myList, emptyList; //emptyList is a dummy object

	for (int i = 1; i < 7; ++i)
		myList.insertBack(i);

	cout << "\n\nTESTING: back()"
		<< "\nEXPECTED OUTPUT: 6";
	cout << "\n    YOUR OUTPUT: ";
	int backElem = 0;
	functionCall(myList, emptyList, "back", backElem);
	cout << backElem;
}

void testTransferList()
{
	int elem = 0;
	DoublyList emptyList, callingList, paramList;

	for (int i = 1; i < 7; ++i)
		paramList.insertBack(i);

	cout << "\n\nTESTING: transferList...";
	cout << "\n\n      Calling object should be: (empty)"
		<< "\n        Your calling object is: ";
	functionCall(callingList, emptyList, "print", elem);
	cout << "\n\n      Parameter object should be: 1 2 3 4 5 6"
		<< "\n        Your parameter object is: ";
	functionCall(paramList, emptyList, "print", elem);

	cout << "\n\nTransfer list...";
	functionCall(callingList, paramList, "transferList", elem);

	cout << "\n\n      Calling object should be: 1 2 3 4 5 6"
		<< "\n        Your calling object is: ";
	functionCall(callingList, emptyList, "print", elem);
	cout << "\n\n      Parameter object should be: (empty)"
		<< "\n        Your parameter object is: ";
	functionCall(paramList, emptyList, "print", elem);
}
void testEx()
{
	int elem = 0;
	DoublyList emptyList, callingList, paramList;

	for (int i = 1; i < 7; ++i)
		paramList.insertBack(i);

	cout << "\n\nTESTING: transferList...";
	cout << "\n\n      Calling object should be: (empty)"
		<< "\n        Your calling object is: ";
	functionCall(callingList, emptyList, "print", elem);
	cout << "\n\n      Parameter object should be: 1 2 3 4 5 6"
		<< "\n        Your parameter object is: ";
	functionCall(paramList, emptyList, "print", elem);

	cout << "\n\nTransfer list...";
	functionCall(callingList, paramList, "transferList", elem);

	cout << "\n\n      Calling object should be: 1 2 3 4 5 6"
		<< "\n        Your calling object is: ";
	functionCall(callingList, emptyList, "print", elem);
	cout << "\n\n      Parameter object should be: (empty)"
		<< "\n        Your parameter object is: ";
	functionCall(paramList, emptyList, "print", elem);
}