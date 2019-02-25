/*
Title: Programming Assignment 6 - BST
Abstract: Added recursive search, inorder traversal, preorder traversal, and count functions
ID: 003034069
Date: 2/25/19
*/

#include <iostream>
#include <iomanip>

using namespace std;

#include "BST.h"

//--- Definition of constructor
BST::BST()
: myRoot(0)
{}

bool BST::empty() const
{ return myRoot == 0; }


bool BST::search(BinNode * node, const int & item) const
{
	if (node == 0) // reached end of tree, item not found
		return false; 
	else if (item < node->data)  // descend left
		return search(node->left, item);
	else if (node->data < item)  // descend right
		return search(node->right, item);
	else if (node->data == item)  // item found
		return true;

}


void BST::insert(const int & item)
{
   BinNode * locptr = myRoot;   // search pointer
   BinNode * parent = 0;        // pointer to parent of current node
   bool found = false;     // indicates if item already in BST
   while (!found && locptr != 0)
   {
      parent = locptr;
      if (item < locptr->data)       // descend left
         locptr = locptr->left;
      else if (locptr->data < item)  // descend right
         locptr = locptr->right;
      else                           // item found
         found = true;
   }
   if (!found)
   {                                 // construct node containing item
      locptr = new BinNode(item);  
      if (parent == 0)               // empty tree
         myRoot = locptr;
      else if (item < parent->data )  // insert to left of parent
         parent->left = locptr;
      else                           // insert to right of parent
         parent->right = locptr;
   }
   else
      cout << "Item already in the tree\n";
}

void BST::inOrder(BinNode * node)
{
	if (node == 0) return;
	inOrder(node->left);
	cout << node->data << endl;
	inOrder(node->right);
}

void BST::preOrder(BinNode * node)
{
	if (node == 0) return;
	cout << node->data << endl;
	preOrder(node->left);
	preOrder(node->right);
}

int BST::nodeCount(BinNode * node)
{
	int count = 0;
	if (node == 0) return count;
	count += nodeCount(node->left);
	count += nodeCount(node->right);
	return ++count;
}