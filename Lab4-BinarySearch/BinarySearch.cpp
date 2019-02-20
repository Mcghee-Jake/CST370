/*
Title: Lab 4 - Binary Search
Abstract: Added function LinearSearh, IterBinarySearch, and RecursiveBinarySearch
ID: 003034069
Date: 2/19/19
*/

#include <iostream>
using namespace std;


bool LinearSearch(int arr[], int n, int val) 
{
	// simply step through the array and check if the value is present
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == val) return true;
	}
	return false;
}

bool IterBinarySearch(int arr[], int n, int val) 
{
	int low = 0;
	int high = n - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2; // cut the array in half

		if (arr[mid] == val) return true; // val is the middle value
		else if (val < arr[mid]) high = mid - 1; // val might be in the lower half
		else low = mid + 1; // val might be in higher half
	}
	
	return false;
}

bool RecursiveBinarySearch(int arr[], int low, int high, int val)
{
	if (low <= high) 
	{
		int mid = (low + high) / 2; // cut the array in half

		if (arr[mid] == val) return true; // val is the middle value
		else if (val < arr[mid]) return RecursiveBinarySearch(arr, low, mid - 1, val); // val might be in the lower half
		else return RecursiveBinarySearch(arr, mid + 1, high, val); // val might be in higher half
	}
	return false;
}

void printArray(int arr[], int n) 
{
	cout << "Array [ ";
	for (int i = 0; i < n -1; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << arr[n-1] << " ]" << endl;
}

int main()
{
	int val;
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	

	printArray(arr, n);

	// Test Linear Search

	cout << endl;

	val = 3;
	cout << "Linear Search for " << val << " -> ";
	if (LinearSearch(arr, n, val)) cout << "True" << endl;
	else cout << "False" << endl;

	val = 7;
	cout << "Linear Search for " << val << " -> ";
	if (LinearSearch(arr, n, val)) cout << "True" << endl;
	else cout << "False" << endl;

	val = -1;
	cout << "Linear Search for " << val << " -> ";
	if (LinearSearch(arr, n, val)) cout << "True" << endl;
	else cout << "False" << endl;

	val = 11;
	cout << "Linear Search for " << val << " -> ";
	if (LinearSearch(arr, n, val)) cout << "True" << endl;
	else cout << "False" << endl;

	// Test Iterative Binary Search

	cout << endl;

	val = 2;
	cout << "Iterative Binary Search for " << val << " -> ";
	if (IterBinarySearch(arr, n, val)) cout << "True" << endl;
	else cout << "False" << endl;

	val = 8;
	cout << "Iterative Binary Search for " << val << " -> ";
	if (IterBinarySearch(arr, n, val)) cout << "True" << endl;
	else cout << "False" << endl;


	val = -1;
	cout << "Iterative Binary Search for " << val << " -> ";
	if (IterBinarySearch(arr, n, val)) cout << "True" << endl;
	else cout << "False" << endl;

	val = 11;
	cout << "Iterative Binary Search for " << val << " -> ";
	if (IterBinarySearch(arr, n, val)) cout << "True" << endl;
	else cout << "False" << endl;

	// Test Recursive Binary Search

	cout << endl;

	val = 0;
	cout << "Recusrive Binary Search for " << val << " -> ";
	if (RecursiveBinarySearch(arr, 0, n-1, val)) cout << "True" << endl;
	else cout << "False" << endl;

	val = 10;
	cout << "Recusrive Binary Search for " << val << " -> ";
	if (RecursiveBinarySearch(arr, 0, n - 1, val)) cout << "True" << endl;
	else cout << "False" << endl;

	val = -1;
	cout << "Recusrive Binary Search for " << val << " -> ";
	if (RecursiveBinarySearch(arr, 0, n - 1, val)) cout << "True" << endl;
	else cout << "False" << endl;

	
	val = 11;
	cout << "Recusrive Binary Search for " << val << " -> ";
	if (RecursiveBinarySearch(arr, 0, n, val)) cout << "True" << endl;
	else cout << "False" << endl;

}
