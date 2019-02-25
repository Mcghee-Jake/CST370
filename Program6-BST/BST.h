/*
Title: Programming Assignment 6 - BST
Abstract: Added recursive search, inorder traversal, preorder traversal, and count functions
ID: 003034069
Date: 2/25/19
*/

#include <iostream>
using namespace std;  

#ifndef BINARY_SEARCH_TREE
#define BINARY_SEARCH_TREE

class BST
{

 private:
	/***** Node class *****/
	class BinNode
	{
	public:
		int data;
		BinNode * left;
		BinNode * right;

		// BinNode constructors
		// Default -- data part is default int value; both links are null.
		BinNode()
			: left(0), right(0)
		{}

		// Explicit Value -- data part contains item; both links are null.
		BinNode(int item)
			: data(item), left(0), right(0)
		{}

	};// end of class BinNode declaration

 public:
  /***** Function Members *****/
  BST();
  bool empty() const;
  bool search(BinNode * node, const int & item) const; 
  void insert(const int & item);
  void inOrder(BinNode * node);
  void preOrder(BinNode * node);
  int nodeCount(BinNode * node);
 
  
  /***** Data Members *****/
  BinNode * myRoot; 

}; // end of class declaration

#endif
