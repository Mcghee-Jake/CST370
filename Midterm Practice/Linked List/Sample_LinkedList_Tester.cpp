#include <iostream>
using namespace std;

#include "LinkedList.h"


int main()
{
  
   LinkedList countList;
   countList.insert(100, 0);
   countList.insert(100, 1);
   countList.insert(300, 2);
   countList.insert(100, 3);
   countList.insert(300, 4);
   countList.display(cout);

   // Test count
   cout << endl;
   cout << countList.count(300);
   cout << endl;


   LinkedList nthList;
   nthList.insert(5, 0);
   nthList.insert(4, 1);
   nthList.insert(3, 2);
   nthList.insert(2, 3);
   nthList.insert(1, 4);
   nthList.display(cout);

   // Test getNth
   cout << endl;
   cout << nthList.getNth(4, cout);
   cout << endl;

   LinkedList popList;
   popList.insert(5, 0);
   popList.insert(4, 1);
   popList.insert(3, 2);
   popList.insert(2, 3);
   popList.insert(1, 4);
   popList.display(cout);

   // Test pop
   cout << endl;
   cout << popList.pop();
   cout << endl;
   popList.display(cout);
   cout << endl;

   LinkedList appendList1;
   appendList1.insert(3, 0);
   appendList1.insert(2, 0);
   appendList1.insert(1, 0);
   appendList1.display(cout);
   cout << endl;

   LinkedList appendList2;
   appendList2.insert(6, 0);
   appendList2.insert(5, 0);
   appendList2.insert(4, 0);
   appendList2.display(cout);
   cout << endl;

   // Test append
  
   appendList1.append(appendList2);
   // appendList1.display(cout);
   cout << endl;
  


   /*
   
     LinkedList duplicatesList;
   duplicatesList.insert(100, 0);
   duplicatesList.insert(100, 1);
   duplicatesList.insert(300, 2);
   duplicatesList.insert(100, 3);
   duplicatesList.insert(300, 4);
   duplicatesList.display(cout);
   cout << endl;
   duplicatesList.duplicates().display(cout);
   cout << endl;
   
   */

}

