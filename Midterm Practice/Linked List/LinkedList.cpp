#include <iostream>
using namespace std;

#include "LinkedList.h"

//-- Default constructor
LinkedList::LinkedList()
{ 
	mySize = 0;
	first = NULL;
}

//-- Definition of the copy constructor
LinkedList::LinkedList(const LinkedList & origList)
{
	mySize = origList.mySize;
	first = NULL;
	
	if (mySize == 0) 
		return;

	Node * origPtr, * lastPtr;
	first = new Node(origList.first->data); // copy first node
	lastPtr = first;
	origPtr = origList.first->next;
	while (origPtr != NULL)
	{
		lastPtr->next = new Node(origPtr->data);
		origPtr = origPtr->next;
		lastPtr = lastPtr->next;
	}
}


//-- Definition of the destructor
LinkedList::~LinkedList()
{
	Node * prev = first;
	Node * ptr;

	while (prev != NULL)
	{
		ptr = prev->next;
		delete prev;
		prev = ptr;
	}
}


//-- Definition of insert()
void LinkedList::insert(ElementType dataVal, int index)
{
	if (index < 0 || index > mySize)
	{
		cerr << "Illegal location to insert -- " << index << endl;
		return;
	}

	mySize++;
	Node * newPtr = new Node(dataVal);
	Node * predPtr = first;
	if (index == 0)
	{
		newPtr->next = first;
		first = newPtr;
	}
	else
	{
		for(int i = 1; i < index; i++)
			predPtr = predPtr->next;
		newPtr->next = predPtr->next;
		predPtr->next = newPtr;
	}
}


//-- Definition of erase()
void LinkedList::erase(int index)
{
	if (index < 0 || index >= mySize)
	{
		cerr << "Illegal location to delete -- " << index << endl;
		return;
	}

	mySize--;
	Node * ptr;
	Node * predPtr = first;
	if (index == 0)
	{
		ptr = first;
		first = ptr->next;
		delete ptr;
	}
	else
	{
		for(int i = 1; i < index; i++)
			predPtr = predPtr->next;
		ptr = predPtr->next;
		predPtr->next = ptr->next;
		delete ptr;
	}
}



//-- Definition of display()
void LinkedList::display(ostream & out) const
{
	Node * ptr = first;
	while (ptr != 0)
	{
		out << ptr->data << " ";
		ptr = ptr->next;
	}
}


//-- Definition of count()
int LinkedList::count(int searchFor) {
	Node * ptr = first;
	int count = 0;
	while (ptr != 0)
	{
		if (ptr->data == searchFor) count++;
		ptr = ptr->next;
	}
	return count;
}

//-- Definition of getNth
ElementType LinkedList::getNth(int index, ostream & out) {
	if (index < 0 || index >= mySize) {
		out << "ERROR\n";
		return NULL;
	} else {
		Node * ptr = first;
		for (int i = 0; i < index; i++)
			ptr = ptr->next;
		return ptr->data;
	}
}

//-- Definition of pop
ElementType LinkedList::pop() {
	Node * ptr1 = first;
	Node * ptr2 = first->next;
	first = ptr2;
	mySize--;
	return ptr1->data;
}


//-- Definition of append
void LinkedList::append(LinkedList list) {
	Node * ptr = first;
	while (ptr->next != 0) {
		ptr = ptr->next;
	}
	ptr->next = list.first;
}

//-- Definition of duplicates
LinkedList LinkedList::duplicates() {
	LinkedList newList;
	Node * ptr1 = first;
	while (ptr1 != 0) {
		if (newList.first == NULL) {
			newList.first->data = ptr1->data;

		}
		else {
			Node * ptr2 = newList.first;
			bool elementFound = false;
			while (ptr2 != 0) {
				if (ptr1->data = ptr2->data) {
					elementFound = true;
				}
				ptr2 = ptr2->next;
			}
			if (!elementFound) newList.insert(ptr1->data, newList.mySize - 1);
		}

		ptr1 = ptr1->next;
	}

	return newList;
}