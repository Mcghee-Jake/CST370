/*
Title: Programming Assignment 3 - Queues
Abstract: Added a program that determines if an input string is a palindrome
ID: 003034069
Date: 1/123/19
*/

#include <iostream>
#include <string>
using namespace std;
	
#include "Queue.h"
#include "Stack.h"

int main()
{
	string input;
	Queue q;
	Stack s;
	bool isPalindrome = true;

	// Get user input
	cout << "Please enter a string => ";
	cin >> input;

	// Add the chars to the queue and stack
	for (int i = 0; i < input.length(); i++)
	{
		q.enqueue(input[i]);
		s.push(input[i]);
	}

	// Check if the word is a palindrome
	while (!q.empty())
	{
		if (q.front() != s.top()) isPalindrome = false;
		q.dequeue();
		s.pop();
	}

	// Output the result
	cout << "\"" << input << "\" is ";
	if (!isPalindrome) cout << "not ";
	cout << "a palindrome." << endl;
}
