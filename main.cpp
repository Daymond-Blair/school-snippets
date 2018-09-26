#include <cstdlib>
#include "myList.h"

using namespace std;





int main() 
{
	

	// create front of list pointer
	node* head;
	// create end of list pointer
	node* tail;
	// create list builder pointer
	node* n;

	// create first node of the list
	n = new node;
	// fill first node with data 1
	n->data = 1;
	// make sure first node's previous pointer is not pointing to anything
	n->pointToPreviousNode = NULL;

	// initialize head and tail pointers
	// head points to n which points to variable data which equals 1
	head = n;
	// tail points to n which points to variable data which equals 1
	tail = n;

	// create second node in list
	n = new node;
	// fill second node with data 2
	n->data = 2; 
	// link second node back to first node
	n->pointToPreviousNode = tail;
	// link first node to second node
	tail->pointToNextNode = n; // first and second node are now linked together
	// advance tail to second node
	tail = n; // tail pointing to second node

	// make two more nodes
	n = new node;
	n->data = 4;
	n->pointToPreviousNode = tail;
	tail->pointToNextNode = n;
	tail = n;

	n = new node;
	n->data = 8;
	n->pointToPreviousNode = tail;
	tail->pointToNextNode = n;
	tail = n;
	// mark very end of list by making sure last node's next pointer isnt pointing to anything
	tail->pointToNextNode = NULL;

	// call functions that can traverse the doubly linked list
	traverseForward(head);
	traverseBackward(tail);
	return 0;
}

