// University of Arkansas at Little Rock
// Department of Computer Science
// CPSC 2380: Data Structures and Algorithms
// Fall 2019
// Project 2: Binary Search Tree
// Due Date: November 26, 2019
// Name: Julia Green
// T-number (Last 4 Digits): 7594
// Description of the Program (2-3 sentences):  This is the .cpp file that contains the methods and functions associated with the Node.h file.
// Date Written: 11/19/19
// Date Revised: 11/19/19

#ifndef NODE_CPP
#define NODE_CPP
#include <iostream>
using namespace std;
#include "Node.h"

Node::Node()
{
	left = NULL;
	value = 0;
	right = NULL;
}

Node::Node(int val)
{
	left = NULL;
	right = NULL;
	value = val;
}

Node::~Node()
{

}

int Node::getValue()
{
	return value;
}

Node* Node::getLeftNode()
{
	return (left);
}

Node* Node::getRightNode()
{
	return (right);
}
#endif