/*
	Yilmaz, Ferah

	April 9, 2020

	CS A200
	Lab 3
*/

#include "HashTable.h"

using namespace std;

// default constructor
HashTable::HashTable()
{
	numOfElements = 0;
	capacity = CAPACITY;
	
	table = new int[] {-1};

	/*for (int i = 0; i < capacity; ++i)
	{
		table[i] = -1;
	}*/
}

// overloaded constructor
HashTable::HashTable(int tablecap)
{
	numOfElements = 0;
	capacity = tablecap;

	table = new int[] {-1};

	/*for (int i = 0; i < capacity; ++i)
	{
		table[i] = -1;
	}*/
}

// copy constructor
HashTable::HashTable(const HashTable& other)
{
	numOfElements = other.numOfElements;
	capacity = other.capacity;

	table = new int[capacity];

	for (int i = 0; i < capacity; ++i)
		table[i] = other.table[i];
}

// move constructor
HashTable::HashTable(HashTable&& other) noexcept
{
	numOfElements = other.numOfElements;
	capacity = other.capacity;

	other.numOfElements = 0;
	other.capacity = 0;

	table = other.table;
	other.table = nullptr;
}

// insert
void HashTable::insert(int key)
{
	if (numOfElements == capacity)
		cerr << "Table is full. Cannot insert.\n";

	int j = 0;
	int index = 0;
	bool found = false;

	while (!found && j != (capacity + 1 / 2))
	{

		if (table[hashValue(j,key)] != -1)
		{
			++j;
		}
		else
		{
			found = true;
			index = hashValue(j, key);
			table[index] = key;
			++numOfElements;
		}
	}
	
	if (j == (capacity + 1) / 2)
		cerr << "Could not insert key. Need to rehash" << endl;
}

// overloaded assignment operator
HashTable& HashTable::operator=(const HashTable& other)
{
	if (this == &other)
		cerr << "Attempted assignment to self.";
	else
	{
		if (numOfElements > 0)
		{
			emptyTable();
		}

		numOfElements = other.numOfElements;
		capacity = other.capacity;

		table = new int[capacity];

		for (int i = 0; i < capacity; ++i)
		{
			table[i] = other.table[i];
		}
	}

	return *this;
}

// move assignment operator
HashTable& HashTable::operator=(HashTable&& other) noexcept
{
	if (this == &other)
		cerr << "Attempted assignment to self.";
	else
	{
		if (numOfElements > 0)
		{
			emptyTable();
		}

		numOfElements = other.numOfElements;
		capacity = other.capacity;

		other.numOfElements = 0;
		other.capacity = 0;

		table = other.table;
		other.table = nullptr;
	}

	return *this;
}

// search
bool HashTable::search(int key)
{
	if (numOfElements == 0)
		cerr << "Hash table is empty." << endl;

	int j = 0;
	int index = 0;

	while (j != (capacity + 1 / 2))
	{
		if (table[hashValue(j, key)] == -1)
		{
			return false;
		}
		else
		{
			++j;
			index = hashValue(j, key);
			
			if (table[index] == key)
				return true;
		}
	}
	return false;
}

// getCapacity
int HashTable::getCapacity() const
{
	return capacity;
}

// subscript operator
int& HashTable::operator[](int index) const
{
	if (index >= capacity) 
	{
		cout << "Index out of bound";
	}
	
	return table[index];
}

// emptyTable
void HashTable::emptyTable()
{
	for (int i = 0; i < capacity; ++i)
	{
		table[i] = -1;
	}

	numOfElements = 0;
}

// Destructor
HashTable::~HashTable()
{
	delete[] table;
	table = nullptr;
}

// hashValue
int HashTable::hashValue(int j, int key) const
{
	return (((2 * key) + 5) + (j * j)) % capacity;
}