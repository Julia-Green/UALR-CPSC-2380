// University of Arkansas at Little Rock
// Department of Computer Science
// CPSC 2380: Data Structures and Algorithms
// Fall 2019
// Project 2: Binary Search Tree
// Due Date: November 26, 2019
// Name: Julia Green
// T-number (Last 4 Digits): 7594
// Description of the Program (2-3 sentences): This is the main.cpp file that tests the sum function in the BinarySearchTree.cpp file.
// Date Written: 11/19/19
// Date Revised: 11/19/19

#include "iostream"
#include "Node.h"
#include "BinarySearchTree.h"
using namespace std;

int main()
{
	BinarySearchTree* bst = new BinarySearchTree();
	Node* node1 = new Node(8);
	bst->insert(node1);
	Node* node2 = new Node(5);
	bst->insert(node2);
	Node* node3 = new Node(6);
	bst->insert(node3);
	Node* node4 = new Node(10);
	bst->insert(node4);
	Node* node5 = new Node(12);
	bst->insert(node5);

	// dump binary search tree
	bst->dumpBinarySearchTree();
	cout << endl;
	cout << bst->sum(bst->getRoot()) << endl;
	system("PAUSE");
	return 0;
}