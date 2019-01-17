/*
Title: Programming Assignment 2 - Stacks
Abstract: Added a program that sorts a stack using a second stack
ID: 003034069
Date: 1/17/19
*/

/*---------------------------------------------------------------------
			   Driver program to test the Stack class.
  ----------------------------------------------------------------------*/

#include <iostream>
using namespace std;

#include "Stack.h"


int main()
{

	/* 
	--- Psudocode Explanation ---

	- While the unsorted stack is not empty
		- Pop the top element and store it in a temp variable
		- While the second stack is not empty and the top element of that stack is greater then the value in the temp variable
			- Pop the top element of the second stack and push it onto the first stack
		- Push the value of the temp variable onto the second stack
	*/


	Stack s1, s2;
	int nums[] = { 1, 5, 3, -3, 4, 8, 10, -5 };
	//int nums[] = { 1, 5, -4, 6, 2 };
	//int nums[] = { 1, -4, -4, 6, 6, 9 };
	for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
		s1.push(nums[i]);
	}
	cout << "__Unsorted_Stack__\n";
	s1.display(cout);
	int temp;
	while (!s1.empty())
	{
		temp = s1.top();
		s1.pop();
		while (!s2.empty() && s2.top() > temp)
		{
			s1.push(s2.top());
			s2.pop();
		}
		s2.push(temp);
	}
	cout << "__Sorted_Stack__\n";
	s2.display(cout);
}
