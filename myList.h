#pragma once
#ifndef _MYLIST_H_INCLUDED__
#define _MYLIST_H_INCLUDED__

struct node
{
	// create variable for node data use
	int data;
	// pointer which points to next node in list
	node* pointToNextNode;
	// pointer which points to previous node in list
	node* pointToPreviousNode;

};

// traversal function declarations
void traverseForward(node* head);
void traverseBackward(node* tail);

#endif