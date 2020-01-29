// University of Arkansas at Little Rock
// Department of Computer Science
// CPSC 2380: Data Structures and Algorithms
// Fall 2019
// Project 2: Binary Search Tree
// Due Date: November 26, 2019
// Name: Julia Green
// T-number (Last 4 Digits): 7594
// Description of the Program (2-3 sentences): This is the header file that contains the declarations of the functions and methods within the BinarySearchTree.cpp file.
// Date Written: 11/19/19
// Date Revised: 11/19/19

#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

class BinarySearchTree
{
	public:
		BinarySearchTree();
		~BinarySearchTree();
		void insert(Node* node);
		Node* insertRecursively(Node* root, Node* Newnode);
		Node* getRoot();
		void updateRoot(Node* node);
		void inOrderTraversal(Node* root);
		void dumpBinarySearchTree();
		int sum(Node* node);
		
	private:
		Node* root;
};
#endif