/*
	Krishcko, Alina
	Yilmaz, Ferah

	October 1, 2019

	CS A250
	Lab 6
*/

#include "DoublyList.h"

using namespace std;

// Definition copy constructor
DoublyList::DoublyList(const DoublyList& myList)
{
	count = 0;
	first = nullptr;
	last = nullptr;

	Node* current = myList.first;

	while (current != nullptr)
	{
		insertBack(current->getData());
		current = current->getNext();
	}
}

// Definition function copyCallingObjIsEmpty
void DoublyList::copyCallingObjIsEmpty(const DoublyList& myList)
{
	Node* current = myList.first;

	while (current != nullptr)
	{
		insertBack(current->getData());
		current = current->getNext();
	}
}

// Definition function copyObjectsSameLength
void DoublyList::copyObjectsSameLength(const DoublyList& myList)
{
	Node* current = myList.first;
	Node* trailCurrent = first;

	while (current != nullptr)
	{
		trailCurrent->setData(current->getData());
		current = current->getNext();
		trailCurrent = trailCurrent->getNext();
	}
}

// Definition function copyCallingObjLonger
void DoublyList::copyCallingObjLonger(const DoublyList& myList)
{
	Node* current = myList.first;
	Node* trailCurrent = first;

	while (current != nullptr)
	{
		trailCurrent->setData(current->getData());
		current = current->getNext();
		trailCurrent = trailCurrent->getNext();
	}

	last = trailCurrent->getPrev();
	last->setNext(nullptr);

	Node* temp = trailCurrent;

	while (trailCurrent != nullptr)
	{
		trailCurrent = trailCurrent->getNext();
		delete temp;
		temp = trailCurrent;
	}

	count = myList.count;
}

// Definition function copyCallingObjShorter
void DoublyList::copyCallingObjShorter(const DoublyList& myList)
{
	Node* current = myList.first;
	Node* trailCurrent = first;

	while (trailCurrent != nullptr)
	{
		trailCurrent->setData(current->getData());
		current = current->getNext();
		trailCurrent = trailCurrent->getNext();
	}

	while (current != nullptr)
	{
		insertBack(current->getData());
		current = current->getNext();
	}
}


