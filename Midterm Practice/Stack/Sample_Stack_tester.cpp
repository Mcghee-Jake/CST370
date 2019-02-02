/*---------------------------------------------------------------------
               Driver program to test the Stack class.
  ----------------------------------------------------------------------*/

#include <iostream>
#include <string>
using namespace std;

#include "Stack.h"



int main()
{
   
   string input;
   cout << "Enter a string => ";
   cin >> input;
   Stack s;
   bool isBalanced = true;
   for (int i = 0; i < input.length(); i++)
   {
	   if ((char)input[i] == '(' || (char)input[i] == '{' || (char)input[i] == '[') s.push(input[i]);
	   else
	   {
		   switch (input[i])
		   {
		   case ')':
			   if (s.top() != '(') isBalanced = false;
			   break;
		   case '}':
			   if (s.top() != '{') isBalanced = false;
			   break;
		   case ']':
			   if (s.top() != '[') isBalanced = false;
			   break;
		   }
		   s.pop();
	   }
   }

   if (!s.empty()) isBalanced = false;

   if (isBalanced) cout << "Balanced";
   else cout << "Not Balanced";

}
