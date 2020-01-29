// University of Arkansas at Little Rock
// Department of Computer Science
// CPSC 2380: Data Structures and Algorithms
// Fall 2019
// Project 1: Doubly Linked List
// Due Date: October 8, 2019
// Name: Julia Green
// T-number (Last 4 Digits): 7594
// Description of the Program (2-3 sentences): This is the main.cpp file that tests the DoublyLinkedList destructor in the DoublyLinkedList.cpp file.
// Date Written: 10/03/19
// Date Revised: 10/08/19
#include <iostream>
#include "Node.h"
#include "doublylinkedlist.h"
using namespace std;

int main() {
	// test case 1
	// Create a doubly linked list
	DoublyLinkedList Dll_1;

	// Each node contains only one character of a string
	Node n11(1);
	Node n12(2);
	Node n13(3);
	Node n14(4);
	Node n15(5);

	// a doubly linked list of characters by inserting nodes
	Dll_1.addNewNodeToBack(&n11);
	Dll_1.addNewNodeToBack(&n12);
	Dll_1.addNewNodeToBack(&n13);
	Dll_1.addNewNodeToBack(&n14);
	Dll_1.addNewNodeToBack(&n15);
	Dll_1.~DoublyLinkedList();

	cout << "The doubly linked list: ";
	Dll_1.displayDoublyLinkedList();
	cout << endl;

	system("PAUSE");
	return 0;
}