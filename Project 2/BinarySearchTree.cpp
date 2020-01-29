// University of Arkansas at Little Rock
// Department of Computer Science
// CPSC 2380: Data Structures and Algorithms
// Fall 2019
// Project 2: Binary Search Tree
// Due Date: November 26, 2019
// Name: Julia Green
// T-number (Last 4 Digits): 7594
// Description of the Program (2-3 sentences):  This is the .cpp file that contains the methods and functions associated with the BinarySearchTree.h file. 
// Date Written: 11/19/19
// Date Revised: 11/19/19

#include <iostream>
using namespace std;
#include "Node.h"
#include "BinarySearchTree.h"

BinarySearchTree::BinarySearchTree()
{
	root = NULL;
}

BinarySearchTree::~BinarySearchTree()
{
}

Node* BinarySearchTree::getRoot()
{
	return(root);
}

void BinarySearchTree::updateRoot(Node* node)
{
	root = node;
}

void BinarySearchTree::insert(Node* node)
{
	if (root == NULL)
		root = node; else
	{
		Node* tempNode = root;
		while (tempNode != NULL)
		{
			if (node->value < tempNode->value) // go left
			{
				if (tempNode->left != NULL)
					tempNode = tempNode->left;
				else
				{
					tempNode->left = node;
					break;
				}
			}
			else // go right
			{
				if (tempNode->right != NULL)
					tempNode = tempNode->right;
				else
				{
					tempNode->right = node;
					break;
				}
			}
		} // while
	} // if
}

Node* BinarySearchTree::insertRecursively(Node* troot, Node* newNode)
{
	// If empty
	if (troot == NULL) {
		return newNode;
	}
	Node* tempNode = troot;
	// If not empty 
	if (newNode->value <= tempNode->value) { // Goes left
		tempNode->left = insertRecursively(tempNode->left, newNode);
	}
	else { // Goes right
		tempNode->right = insertRecursively(tempNode->right, newNode);
	}
	return tempNode;
}

void BinarySearchTree::dumpBinarySearchTree()
{
	inOrderTraversal(root);
}

void BinarySearchTree::inOrderTraversal(Node* root) // Left Root Right
{
	if (root != NULL) 
	{
		inOrderTraversal(root->left);
		cout << root->value << " ";
		inOrderTraversal(root->right);
	}
}

int BinarySearchTree::sum(Node* node) 
{	 
	// If empty
	if (node == NULL) {
		return 0;
	}
	
	// Sums nodes recursively
	else {
		return node->value + sum(node->left) + sum(node->right);
	}
}