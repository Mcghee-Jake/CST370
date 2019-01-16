/*
Title: Linked List Programing Assignment
Abstract:
Created a program to take user input and then print out all the combinations
of substrings within that text that start with A and end with B
ID: 003034069
Date: 1/15/19
*/

#include <iostream>
using namespace std;

#include "LinkedList.h"
#include <string>

int main()
{
	// Get user input
	cout << "Enter a string: ";
	string inString;
	cin >> inString;
	
	// Convert the input text into a linked list
	LinkedList myStringList;
	for (int i = 0; i < inString.length(); i++) {
		myStringList.insert(inString[i], i);
	}

	// Call substring funciton on that linked list
	myStringList.substring(cout);

}