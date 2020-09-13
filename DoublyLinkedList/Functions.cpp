/*
	Yilmaz, Ferah

	September 17, 2019

	CS A250
	Lab 4
*/

#include "DoublyList.h"

using namespace std;

// Definition function print
void DoublyList::print() const
{
	Node* current = first;

	while (current != nullptr)
	{
		cout << current->getData() << " ";
		current = current->getNext();
	}
}

// Definition function reversePrint
void DoublyList::reversePrint() const 
{
	Node* current = last;
	while (current != nullptr) 
	{ 
		cout << current->getData() << " ";  
		current = current->getPrev(); 
	}
}

// Definition function front
int DoublyList::front() const 
{ 
	return first->getData(); 
}

// Definition function back
int DoublyList::back() const 
{
	return last->getData();
}

// Definition function transferList
//void DoublyList::transferList(DoublyList& otherList)
//{ 
//	Node* temp = otherList.first;
//
//	while (temp != nullptr)
//	{
//		insertBack(temp->getData());
//		temp = temp->getNext();
//	}
//	//count = otherList.count;
//	otherList.destroyList();
//}
void DoublyList::transferList(DoublyList& otherList)
{
	//last->setNext(otherList.first);
	otherList.first->setPrev(last);
	while (first != nullptr)
	{
		insertBack(first->getData());
		first = first->getNext();
	}
	otherList.destroyList();
}