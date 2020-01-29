// University of Arkansas at Little Rock
// Department of Computer Science
// CPSC 2380: Data Structures and Algorithms
// Fall 2019
// Project 1: Doubly Linked List
// Due Date: October 8, 2019
// Name: Julia Green
// T-number (Last 4 Digits): 7594
// Description of the Program (2-3 sentences): This is the .h file that contains the declarations of the functions and methods within the DoublyLinkedList.cpp file.
// Date Written: 10/03/19
// Date Revised: 10/08/19
#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H
#include <iostream>
#include "Node.h"

class DoublyLinkedList {
public:
	DoublyLinkedList();
	~DoublyLinkedList();
	void addNewNodeToFront(Node* newNode);
	void addNewNodeToBack(Node* newNode);
	Node* removeNodeFromFront();
	void addNewNodeBeforeTargetNode(Node* newNode, int v);
	void displayDoublyLinkedList();
	bool isPalindrome();
	DoublyLinkedList* split(int i);
	void drawDoublyLinkedList();

private:
	Node* head;
	Node* tail;
};
#endif
