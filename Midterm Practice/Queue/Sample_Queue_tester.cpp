/*---------------------------------------------------------------------
                  Driver program to test the Queue class.
  ----------------------------------------------------------------------*/

#include <iostream>
using namespace std;
	
#include "Queue.h"

int main()
{
	Queue q1;
	for (int i = 1; i <= 50; i++) {
		q1.enqueue(i*10);
	}
	for (int i = 0; i < 10; i++) {
		q1.dequeue();
	}
	cout << q1.front();
	cout << endl;

	Queue q2;
	q2.enqueue(1);
	q2.enqueue(3);
	q2.enqueue(-5);
	q2.enqueue(6);
	q2.enqueue(10);
	for (int i = 0; i < 3; i++) {
		q2.dequeue();
	}
	q2.display(cout);
}
