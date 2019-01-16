#include <iostream>
using namespace std;

#include "LinkedList.h"
#include <string>

int main()
{
	cout << "Enter a string: ";
	string myString;
	cin >> myString;
	
	LinkedList stringList;
	for (int i = 0; i < myString.length(); i++) {
		cout << myString[i] << endl;
		stringList.insert(myString[i], i);
	}

	stringList.display(cout);
}