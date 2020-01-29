// University of Arkansas at Little Rock
// Department of Computer Science
// CPSC 2380: Data Structures and Algorithms
// Fall 2019
// Project 2: Binary Search Tree
// Due Date: November 26, 2019
// Name: Julia Green
// T-number (Last 4 Digits): 7594
// Description of the Program (2-3 sentences): This is the main.cpp file that tests the insertRecursively function in the BinarySearchTree.cpp file.
// Date Written: 11/19/19
// Date Revised: 11/19/19

#include <iostream>
using namespace std;
#include "Node.h"
#include "BinarySearchTree.h"

int main()
{
	BinarySearchTree* bst = new BinarySearchTree();
	Node* node1 = new Node(8);
	bst->updateRoot(bst->insertRecursively(bst->getRoot(), node1));
	Node* node2 = new Node(5);
	bst->insertRecursively(bst->getRoot(), node2);
	Node* node3 = new Node(6);
	bst->insertRecursively(bst->getRoot(), node3);
	Node* node4 = new Node(10);
	bst->insertRecursively(bst->getRoot(), node4);
	Node* node5 = new Node(12);
	bst->insertRecursively(bst->getRoot(), node5);
	
	// dump binary search tree
	bst->dumpBinarySearchTree();
	cout << endl << endl;
	system("PAUSE");
	return 0;
}