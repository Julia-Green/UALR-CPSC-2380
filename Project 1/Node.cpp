// University of Arkansas at Little Rock
// Department of Computer Science
// CPSC 2380: Data Structures and Algorithms
// Fall 2019
// Project 1: Doubly Linked List
// Due Date: October 8, 2019
// Name: Julia Green
// T-number (Last 4 Digits): 7594
// Description of the Program (2-3 sentences): This is the .cpp file that contains the methods and functions associated with the Node.h file.
// Date Written: 10/03/19
// Date Revised: 10/08/19
#ifndef NODE_CPP
#define NODE_CPP
#include "Node.h"
Node::Node() {
	prev = NULL;
	value = 0;
	next = NULL;
}

Node::Node(int v) {
	prev = NULL;
	value = v;
	next = NULL;
}

Node::~Node() {
}
#endif