#include "DoublyList.h"

using namespace std;

// Definition overloaded insertion operator
ostream& operator<<(ostream& out, const DoublyList& theList)
{
	if (theList.first == nullptr)
		out << "List is empty.";
	else
	{
		Node *temp = theList.first;

		while (temp != NULL)
		{
			out << temp->getData() << " ";
			temp = temp->getNext();
		}
	}

	return out;
}

// Definition default constructor
DoublyList::DoublyList()
{
	first = nullptr;
	last = nullptr;
	count = 0;
}

// Definition overloaded assignment operator
DoublyList& DoublyList::operator=(const DoublyList& otherList)
{
	if (&otherList != this) // make sure objects are distinct
	{
		// parameter object is empty
		if (otherList.first == nullptr)
			destroyList();
		// calling object is empty
		else if (first == nullptr)
			copyCallingObjIsEmpty(otherList);
		// lists have the SAME number of nodes
		else if (count == otherList.count)
			copyObjectsSameLength(otherList);
		// calling object has MORE nodes than the parameter object
		else if (count > otherList.count)
			copyCallingObjLonger(otherList);
		// calling object has LESS nodes than the parameter object
		else
			copyCallingObjShorter(otherList);

		count = otherList.count;
	}
	else
		cerr << "Attempted assignment to itself." << endl;

	return *this;
}

// Definition function insertBack (element)
void DoublyList::insertBack(int elem)
{
	Node *newNode = new Node(elem, last, nullptr);

	if (first == nullptr)
		first = newNode;
	else
		last->setNext(newNode);

	last = newNode;
	++count;
}

// Definition function insertBack (array)
void DoublyList::insertBack(const int a[], int numOfElem)
{
	for (int i = 0; i < numOfElem; ++i)
		insertBack(a[i]);
}

// Definition function getFirst
int DoublyList::getFirst() const
{
	if (first == nullptr)
		return 0;
	else
		return first->getData();
}

// Definition function getLast
int DoublyList::getLast() const
{
	if (first == nullptr)
		return 0;
	else
		return last->getData();
}

// Definition function getNumOfElem
int DoublyList::getNumOfElem() const
{
	return count;
}

// Definition function getPrevOfFirst
Node* DoublyList::getPrevOfFirst() const
{
	if (first == nullptr)
		return 0;
	else
		return first->getPrev();
}

// Definition function getNextOfLast
Node* DoublyList::getNextOfLast() const
{
	if (first == nullptr)
		return 0;
	else
		return last->getNext();
}

// Definition funciton getFirstNodeAddress
Node& DoublyList::getFirstNodeAddress() const
{
	return *first; // return the address of the node first is pointing to
}

// Definition function getLastNodeAddress
Node& DoublyList::getLastNodeAddress() const
{
	return *last; // return the address of the node last is pointing to
}

// Definition function reversePrint
void DoublyList::reversePrint() const
{
	if (first == nullptr)
		cout << "List is empty.";
	else
	{
		Node *temp = last;

		while (temp != nullptr)
		{
			cout << temp->getData() << " ";
			temp = temp->getPrev();
		}
	}
}

// Definition function destroyList
void DoublyList::destroyList()
{
	Node  *temp = first;

	while (first != nullptr)
	{
		first = first->getNext();
		delete temp;
		temp = first;
	}

	last = nullptr;
	count = 0;
}

// Definition destructor
DoublyList::~DoublyList()
{
	destroyList();
}


