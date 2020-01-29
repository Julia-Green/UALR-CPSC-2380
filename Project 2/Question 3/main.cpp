// University of Arkansas at Little Rock
// Department of Computer Science
// CPSC 2380: Data Structures and Algorithms
// Fall 2019
// Project 2: Binary Search Tree
// Due Date: November 26, 2019
// Name: Julia Green
// T-number (Last 4 Digits): 7594
// Description of the Program (2-3 sentences): This is the main.cpp file that tests the sameBinarySearchTree function with the BinarySearchTree.cpp file.
// Date Written: 11/19/19
// Date Revised: 11/19/19

#include <iostream>
using namespace std;
#include "Node.h"
#include "BinarySearchTree.h"

bool sameBinarySearchTree(Node* root1, Node* root2)
{
	// If both are empty
	if (root1 == NULL && root2 == NULL) {
		return 1;
	}
	// If not empty, compare the two
	else if (root1 != NULL && root2 != NULL) {
		return (root1->getValue() == root2->getValue() && sameBinarySearchTree(root1->getLeftNode(), root2->getLeftNode()) && sameBinarySearchTree(root1->getRightNode(), root2->getRightNode()));
	}
	return 0;
}

int main()
{
	BinarySearchTree* bst1 = new BinarySearchTree();
	Node* node1 = new Node(8);
	bst1->insert(node1);
	Node* node2 = new Node(5);
	bst1->insert(node2);
	Node* node3 = new Node(6);
	bst1->insert(node3);
	Node* node4 = new Node(10);
	bst1->insert(node4);
	Node* node5 = new Node(12);
	bst1->insert(node5);

	// dump binary search tree
	bst1->dumpBinarySearchTree();
	cout << endl;
	BinarySearchTree* bst2 = new BinarySearchTree();
	Node* node6 = new Node(8);
	bst2->updateRoot(bst2->insertRecursively(bst2->getRoot(), node6));
	Node* node7 = new Node(5);
	bst2->insertRecursively(bst2->getRoot(), node7);
	Node* node8 = new Node(6);
	bst2->insertRecursively(bst2->getRoot(), node8);
	Node* node9 = new Node(10);
	bst2->insertRecursively(bst2->getRoot(), node9);
	Node* node10 = new Node(12);
	bst2->insertRecursively(bst2->getRoot(), node10);

	// dump binary search tree
	bst2->dumpBinarySearchTree();
	cout << endl << endl;
	cout << sameBinarySearchTree(bst1->getRoot(), bst2->getRoot()) << endl;
	system("PAUSE");
	return 0;
}
