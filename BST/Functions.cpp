/*
	Yilmaz, Ferah

	April 24, 2020

	CS A200
	Lab 4
*/

#include "BST.h"

using namespace std;

// Definition function insert (non-recursive) 
void BST::insert(int item)
{
	if (root == nullptr)
	{
		Node* newNode = new Node;
		root = newNode;
		root->data = item;
	}
	else if (root->data == item)
	{
		cerr << "The item to insert is already in the list"
			<< " - duplicates are not allowed." << endl;
	}
	else
	{
		Node* newNode = new Node;
		newNode->data = item;
		Node* temp = root;
		bool found = false;

		while (temp != nullptr && !found)
		{
			if (item < temp->data)
			{
				if (temp->llink == nullptr)
				{
					found = true;
					temp->llink = newNode;
				}
				else
				{
					temp = temp->llink;
				}
			}
			else
			{
				if (temp->rlink == nullptr)
				{
					found = true;
					temp->rlink = newNode;
				}
				else
				{
					temp = temp->rlink;
				}
			}
		}
	}
}

// Definition function totalNodes
int BST::totalNodes() const
{
	return totalNodes(root);
}

// Definition function totalNodes (recursive)
int BST::totalNodes(const Node* ptr) const
{
	if (ptr == nullptr)
	{
		return 0;
	}
	else
	{
		return totalNodes(ptr->llink) + totalNodes(ptr->rlink) + 1;
	}
}

// Definition overloaded function preorderTraversal
void BST::preOrderTraversal() const
{
	if (root == nullptr)
	{
		cerr << "There is no tree.";
	}
	else
	{
		preOrderTraversal(root);
	}
}

// Definition overloaded function preorderTraversal (recursive)
void BST::preOrderTraversal(const Node* ptr) const
{
	if (ptr != nullptr)
	{
		cout << ptr->data << " ";
		preOrderTraversal(ptr->llink);
		preOrderTraversal(ptr->rlink);
	}
}

// Definition overloaded function postorderTraversal
void BST::postOrderTraversal() const
{
	if (root == nullptr)
	{
		cerr << "There is no tree.";
	}
	else
	{
		postOrderTraversal(root);
	}
}

// Definition overloaded function postorderTraversal (recursive)
void BST::postOrderTraversal(const Node* ptr) const
{
	if (ptr != nullptr)
	{
		postOrderTraversal(ptr->llink);
		postOrderTraversal(ptr->rlink);
		cout << ptr->data << " ";
	}
}
