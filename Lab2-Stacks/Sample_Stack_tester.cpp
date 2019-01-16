/*---------------------------------------------------------------------
               Driver program to test the Stack class.
  ----------------------------------------------------------------------*/

#include <iostream>
#include <string>
using namespace std;

#include "Stack.h"

int main()
{
   Stack s;
   

   cout << "Enter a string => ";
   string input;
   cin >> input;
   for (int i = 0; i < input.length(); i++)
      s.push(input[i]);
   cout << "You entered " << input << "\nReverse is ";
   while (!s.empty())
   {
	   cout << (char)s.top();
	   s.pop();
   }
   cout << endl;
}
