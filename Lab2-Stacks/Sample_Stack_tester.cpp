/*---------------------------------------------------------------------
               Driver program to test the Stack class.
  ----------------------------------------------------------------------*/

#include <iostream>
#include <string>
using namespace std;

#include "Stack.h"

int main()
{

	Stack s1;
	cout << "Enter a string => ";
	string input;
	cin >> input;
	for (int i = 0; i < input.length(); i++)
		s1.push(input[i]);
	cout << "You entered " << input << "\nReverse is ";
	while (!s1.empty())
	{
		cout << (char)s1.top();
		s1.pop();
	}
	cout << endl;

	Stack s2;
	cout << "Enter a number: ";
	int num;
	cin >> num;
	while (num > 0) {
		s2.push(num % 2);
		num /= 2;
	}
	s2.display(cout);


}
