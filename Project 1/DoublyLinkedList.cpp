// University of Arkansas at Little Rock
// Department of Computer Science
// CPSC 2380: Data Structures and Algorithms
// Fall 2019
// Project 1: Doubly Linked List
// Due Date: October 8, 2019
// Name: Julia Green
// T-number (Last 4 Digits): 7594
// Description of the Program (2-3 sentences): This is the .cpp file that contains the methods and functions associated with the DoublyLinkedList.h file.
// Date Written: 10/03/19
// Date Revised: 10/08/19
#ifndef DOUBLYLINKEDLIST_CPP
#define DOUBLYLINKEDLIST_CPP
#include "doublylinkedlist.h"

DoublyLinkedList::DoublyLinkedList() {
	head = NULL;
	tail = NULL;
}

DoublyLinkedList::~DoublyLinkedList() {
	head = NULL;
	tail = NULL;
}

void DoublyLinkedList::addNewNodeToFront(Node * newNode) {
	if (head == NULL && tail == NULL) {
		head = tail = newNode;
	}
	else {
		head->prev = newNode;
		newNode->next = head;
		head = newNode;
	}
}

void DoublyLinkedList::addNewNodeToBack(Node * newNode) {
	if (head == NULL && tail == NULL) {
		head = tail = newNode;
	}
	else {
		tail->next = newNode;
		newNode->prev = tail;
		tail = newNode;
	}
}

Node* DoublyLinkedList::removeNodeFromFront() {
	Node *tempNode;
	tempNode = head;
	head = head->next;
	return tempNode;
}

void DoublyLinkedList::displayDoublyLinkedList() {
	Node *tempNode;
	tempNode = head;
	while (tempNode != tail) {
		cout << tempNode->value << " ";
		tempNode = tempNode->next;
	}
	cout << tail->value << " ";
}

void DoublyLinkedList::drawDoublyLinkedList() {
	Node *tempNode;
	tempNode = head;
	//Loops through the Nodes and draws each
	while (tempNode != NULL) {
		cout << "[address:" << tempNode << ", prev:" << tempNode->prev << ", value:" << tempNode->value << ", next:" << tempNode->next << "]" << endl;
		tempNode = tempNode->next;
	}
}

bool DoublyLinkedList::isPalindrome() {
	//Returns true if the list is empty
	if (head == NULL) {
		return true;
	}

	//Finds the furthermost right node
	Node *rightNode = tail;

	//Checks whether the value of the left and right nodes are equal and iterates inward
	Node* leftNode = head;
	while (head != rightNode) {
		if (leftNode->value != rightNode->value) {
			return false;
		}
		leftNode = leftNode->next;
		rightNode = rightNode->prev;
	}
	return true;
}

DoublyLinkedList* DoublyLinkedList::split(int i) {
	DoublyLinkedList *Dll_2 = new DoublyLinkedList;
	Node *tempNode;
	tempNode = head;
	if (i = 0) {
		Dll_2->head = head;
		Dll_2->tail = tempNode;
		head = tempNode->next;
	}
	else if (i = 5) {
		Dll_2->head = head;
		Dll_2->tail = tail;
	}
	else {
		//Iterates through the list to find the node where we need to cut
		for (int j = 0; j < i; j++) {
			tempNode = tempNode->next;
		}
		Dll_2->head = head;
		Dll_2->tail = tempNode;
		head = tempNode->next;

	}
	//Returns new list
	return Dll_2;
}	

void DoublyLinkedList::addNewNodeBeforeTargetNode(Node* newNode, int v) {
	Node *tempNode;
	tempNode = head;
	//Iterates through the nodes untill the target node is found
	while (tempNode->value != v) {
		tempNode = tempNode->next;
	}
	
	//Inserts the new node infront of the target node
	newNode->prev->next = newNode;	
	newNode->prev = tempNode->prev;
	newNode->next = tempNode;
	tempNode->prev = newNode;
}
#endif