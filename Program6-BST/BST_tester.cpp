/*
Title: Programming Assignment 6 - BST
Abstract: Added recursive search, inorder traversal, preorder traversal, and count functions
ID: 003034069
Date: 2/25/19
*/

/*----- treetester.cpp -----------------------------------------------------
                Program for testing BST.
 ------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

#include "BST.h"

int main()
{


   // Testing Constructor and empty()
   BST intBST;            // test the class constructor
   cout << "Constructing empty BST\n";
   cout << "BST " << (intBST.empty() ? "is" : "is not") << " empty\n";

   // Testing insert
   cout << "\nNow insert a bunch of integers into the BST."
           "\nTry items not in the BST and some that are in it:\n";
   int number;
   for (;;)
   {
      cout << "Item to insert (-999 to stop): ";
      cin >> number;
      if (number == -999) break;
      intBST.insert(number);
   }
   cout << "BST " << (intBST.empty() ? "is" : "is not") << " empty\n";

   // Testing search()
   cout << "\n\nNow testing the search() operation."
           "\nTry both items in the BST and some not in it:\n";
   for (;;)
   {
      cout << "Item to find (-999 to stop): ";
      cin >> number;
      if (number == -999) break;
      cout << (intBST.search(intBST.myRoot, number) ? "Found" : "Not found") << endl;
   }

   cout << "\nInorder traversal:\n";
   intBST.inOrder(intBST.myRoot);

   cout << "\nPreorder traversal:\n";
   intBST.preOrder(intBST.myRoot);

   cout << "\nCount: " << intBST.nodeCount(intBST.myRoot);
}
