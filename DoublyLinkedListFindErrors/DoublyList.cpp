#include "DoublyList.h"

DoublyList::DoublyList()
{
	first = nullptr;
	last = nullptr;
	count = 0;
}

void DoublyList::insertBack(int newData)
{
	Node *newNode = new Node(newData, nullptr, nullptr); // error

	if (first == nullptr)
	{
		first = newNode;
		last = newNode; // missing
	}
	else
	{
		last->setNext(newNode);
		newNode->setPrev(last); // missing
		last = newNode; // missing
	}
	
	++count; // missing
}

bool DoublyList::search(int searchData) const
{
	Node *current = first;

	while (current != nullptr)
	{
		if (current->getData() == searchData) // error
			return true;
		else
			current = current->getNext();
	}

	return false;
}

void DoublyList::deleteNode(int deleteData)
{
	if (first == nullptr)
	{
		cerr << "Cannot delete from an empty list." << endl;
	}
	else
	{
		Node *current = first;

		if (current->getData() == deleteData)
		{
			first = first->getNext();

			if (first == nullptr)
				last = nullptr;
			else first->setPrev(nullptr); // missing

			delete current;
			current = nullptr;
			--count;
		}
		else
		{
			bool found = false;

			while (current != nullptr && !found)
			{
				if (current->getData() == deleteData)
					found = true;
				else
					current = current->getNext(); // missing
			}

			if (current == nullptr)
				cerr << "The item to be deleted is not in the list." << endl;
			else
			{
				if (current != last)
				{
					current->getPrev()->setNext(current->getNext());
					current->getNext()->setPrev(current->getPrev()); // error
				}
				else
				{
					last = current->getPrev();
					last->setNext(nullptr); // missing & added
				}

				--count;
				delete current;
				current = nullptr;
			}
		}
	}
}

void DoublyList::print() const // error
{
	if (count == 0)
		cerr << "List is empty. Cannot print." << endl;
	else
	{
		Node *temp = first;

		while (temp != nullptr) // error
		{
			cout << temp->getData() << " ";
			temp = temp->getNext();
		}
		cout << endl;
	}
}

void DoublyList::reversePrint() const // error
{
	if (count == 0)
		cerr << "List is empty. Cannot print." << endl;
	else
	{
		Node *temp = last;

		while (temp != nullptr) // error
		{
			cout << temp->getData() << " ";
			temp = temp->getPrev();
		}
		cout << endl;
	}
}

void DoublyList::destroyList()
{
	Node *temp = first;

	while (first != nullptr) // error
	{
		first = first->getNext();
		delete temp;
		temp = first;
	}

	count = 0;
	last = nullptr;
}

DoublyList::~DoublyList()
{
	destroyList();
}