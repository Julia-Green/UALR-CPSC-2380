// University of Arkansas at Little Rock
// Department of Computer Science
// CPSC 2380: Data Structures and Algorithms
// Fall 2019
// Project 2: Binary Search Tree
// Due Date: November 26, 2019
// Name: Julia Green
// T-number (Last 4 Digits): 7594
// Description of the Program (2-3 sentences): This is the header file that contains the declarations of the functions and methods within the Node.cpp file.
// Date Written: 11/19/19
// Date Revised: 11/19/19

#ifndef NODE_H
#define NODE_H

class Node
{
	friend class BinarySearchTree;
	public:
		Node();
		Node(int val);
		~Node();
		int getValue();
		Node* getLeftNode();
		Node* getRightNode();
		
	private:
		Node* left;
		int value;
		Node* right;
};
#endif