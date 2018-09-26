#include "myList.h"
#include <iostream>
using namespace std;

// traversal functions definitions
void traverseForward(node* head)
{
	node* temp = head;

	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->pointToNextNode;
	}
	cout << endl;
}

void traverseBackward(node* tail)
{
	node* temp = tail;

	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->pointToPreviousNode;
	}
	cout << endl;
}