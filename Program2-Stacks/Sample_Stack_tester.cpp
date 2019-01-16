/*---------------------------------------------------------------------
			   Driver program to test the Stack class.
  ----------------------------------------------------------------------*/

#include <iostream>
using namespace std;

#include "Stack.h"


int main()
{
	Stack s1, s2;
	int nums[] = { 1, 5, 3, -3, 4, 8, 10, -5 };
	for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
		s1.push(nums[i]);
	}
	cout << "__Unsorted_Stack__\n";
	s1.display(cout);
	int temp;
	while (!s1.empty())
	{
		temp = s1.top();
		s1.pop();
		while (!s2.empty() && s2.top() > temp)
		{
			s1.push(s2.top());
			s2.pop();
		}
		s2.push(temp);
	}
	cout << "__Sorted_Stack__\n";
	s2.display(cout);
}
