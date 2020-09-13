#include "DoublyList.h"

#include <iostream>
#include <string>
using namespace std;

void functionCall(DoublyList& list1, DoublyList& list2,
	const string& func, int& elem);
void testPrint();
void testReversePrint();
void testFront();
void testBack();
void testTransferList();
void testEx();

int main()
{
	testPrint();
	cout << "\n\n----------------------------------------------";

	testReversePrint();
	cout << "\n\n----------------------------------------------";

	testFront();
	cout << "\n\n----------------------------------------------";

	testBack();
	cout << "\n\n----------------------------------------------";

	testTransferList();
	cout << "\n\n----------------------------------------------";

	testEx();
	cout << "\n\n----------------------------------------------";

	cout << endl << endl;
	system("Pause");
	return 0;
}