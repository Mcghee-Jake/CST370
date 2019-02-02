/*
Title: Lab 3 - Queues
Abstract: Added a program that reads a text file and seperates the footnote (indicated by "{" & "}") and the regular text
ID: 003034069
Date: 1/24/19
*/

// Note: Please make sure to place the .txt file in the project folder or else the program will not be able to read the file
// For me this is at C:/Users/J.McGhee/source/repos/ProjectName/ProjectName

/*---------------------------------------------------------------------
                  Driver program to test the Queue class.
  ----------------------------------------------------------------------*/

#include <iostream>
using namespace std;
	
#include "Queue.h"
#include <string>
#include <fstream>


int main()
{
	// Read the txt file into a string
	string text;
	ifstream file("sample.txt");
	if (file.is_open())
	{
		getline(file, text);
		file.close();
	} else cout << "Unable to open file. Are you sure the .txt file is in the correct project folder?";
	
	// Parse the string
	Queue q;
	bool isFootnote = false;
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == '{') isFootnote = true;
		if (!isFootnote) cout << text[i]; // Print out all characters that are not in the footnote
		else q.enqueue(text[i]);
		if (text[i] == '}') isFootnote = false;
	}
	// Print out the footnote
	cout << "\nFootnote: ";
	while (!q.empty())
	{
		cout << (char) q.front();
		q.dequeue();
	}

	cout << endl;
}
