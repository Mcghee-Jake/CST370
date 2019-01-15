#include <iostream>
using namespace std;

#include "LinkedList.h"

int main()
{
   // Test the class constructor
   LinkedList intList;
   cout << "Constructing intList\n";

   // Test insert()
   intList.insert(100, 0);
   intList.display(cout);
   cout << endl;

   intList.insert(200, 0);
   intList.display(cout);
   cout << endl;
   
   intList.insert(300, 1);
   intList.display(cout);
   cout << endl;
   
   intList.insert(400, 1);
   intList.display(cout);
   cout << endl;
   
   intList.insert(500, 3);
   intList.display(cout);
   cout << endl;

   // Test destructor
   LinkedList anotherList;
   for (int i = 0; i < 10; i++)
   {
	   anotherList.insert(100*i, i);
   }
   cout << "\nThis is another list\n";
   anotherList.display(cout);
  

   // Test erase
   intList.erase(1);
   intList.erase(1);
   cout << "\n\nTwo items are erased from the first list\n";
   intList.display(cout);
   cout << endl << endl;

   // Test maxItem
   cout << "Max Item (first list): " << intList.maxItem(cout) << endl;
   cout << "Max Item (second list): " << anotherList.maxItem(cout) << endl;
   LinkedList singleItemList;
   singleItemList.insert(100, 0);
   cout << "New list with a single item: ";
   singleItemList.display(cout);
   cout << "\nMax Item (single item list): " << singleItemList.maxItem(cout) << endl;
   LinkedList emptyList;
   cout << "New empty list: ";
   emptyList.display(cout);
   cout << endl;
   cout << "Max Item (empty list): " << emptyList.maxItem(cout) << endl;
   cout << endl;


   // Test isAscendingOrder
   cout << "isAscendingOrder (first list): " << intList.isAscendingOrder() << endl;
   cout << "isAscendingOrder (second list) : " << anotherList.isAscendingOrder() << endl;
   cout << "isAscendingOrder (empty list) : " << singleItemList.isAscendingOrder() << endl;
   cout << "isAscendingOrder (single item list) : " << singleItemList.isAscendingOrder() << endl;

   cout << endl;

}