/*
Title: Lab - Stacks
Abstract: Added a program to reverse a string and a program to convert a decimal number into binary
ID: 003034069
Date: 1/17/19
*/

/*---------------------------------------------------------------------
               Driver program to test the Stack class.
  ----------------------------------------------------------------------*/

#include <iostream>
#include <string>
using namespace std;

#include "Stack.h"

int main()
{

	//--- Program A ---//

	Stack s1;
	// Get user input
	cout << "Enter a string => ";
	string input;
	cin >> input;
	// Iterate through the string and put each character in the stack
	for (int i = 0; i < input.length(); i++)
		s1.push(input[i]);
	cout << "You entered " << input << "\nReverse is ";
	// Print out the contents of the stack
	while (!s1.empty())
	{
		cout << (char)s1.top();
		s1.pop();
	}
	cout << endl << endl;

	//--- Program B ---//

	Stack s2;
	// Get user input
	cout << "Enter a number: ";
	int num;
	cin >> num;
	cout << "Decimal: " << num << "\nBinary: ";
	// Convert the number into binary by dividing it by two and storing the remainder in the stack
	while (num > 0) {
		s2.push(num % 2);
		num /= 2;
	}
	// Print out the contents of the stack
	while (!s2.empty())
	{
		cout << s2.top();
		s2.pop();
	}
	cout << endl;


}
