/*
Title: Programming Assignment 4 - Sorting
Abstract: Added basic selection sort, selection sort for first k elements, and median function
ID: 003034069
Date: 2/12/19
*/

#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n) {

	for (int i = 0; i < n-1; i++) // for each element in the array (minus the last)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)  // comprate it to all the other elements in the array
		{
			if (arr[j] < arr[min])
				min = j; // set new minimum element
		}
		// swap arr[i] with the next minimum element
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}

void SelectionSortKSmallest(int arr[], int n, int k) {

	for (int i = 0; i < k; i++) 
	{
		int min = i;
		for (int j = i + 1; j < n; j++) 
		{
			if (arr[j] < arr[min])
				min = j; // set new minimum element
		}
		// swap arr[i] with the next minimum element
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}

double median(int arr[], int n) {

	int k = n / 2 + 1;
	SelectionSortKSmallest(arr, n, k);
	if (n % 2 == 1) return arr[k-1];
	else return double (arr[k - 2] + arr[k - 1]) / 2;
}

void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main()
{
	// Basic Selection Sort
	int myArray1[] = { 4, 6, 8, 15, 20, 22, 10, 3, 9, 2 };
	int n = sizeof(myArray1) / sizeof(myArray1[0]);

	cout << "// Regular Selection Sort //\nUnsorted Array: ";
	printArray(myArray1, n);
	cout << "Sorted Array: ";
	SelectionSort(myArray1, n);
	printArray(myArray1, n);
	
	// Selection Sort - k Smallest Elements
	int myArray2[] = { 4, 6, 8, 15, 20, 22, 10, 3, 9, 2 };
	int k = 6;

	cout << "\n// Selection Sort First K Elements, K = " << k << " //\nUnsorted Array: ";
	printArray(myArray2, n);
	
	cout << "Sorted First " << k << " Elements of Array: ";
	SelectionSortKSmallest(myArray2, n, k);
	printArray(myArray2, k);

	// Median
	int myArray3[] = { 4, 6, 8, 15, 20, 22, 10, 3, 9, 2 };
	cout << "\n// Median - Even number of elements //\nUnsorted Array: ";
	printArray(myArray3, n);
	cout << "Size: " << n << "\nMedian: " << median(myArray3, n);

	cout << "\n\n// Median - Odd number of elements //\nUnsorted Array: ";
	int myArray4[] = { 4, 6, 8, 15, 20, 22, 10, 3, 9, 2, 99};
	n = sizeof(myArray4) / sizeof(myArray4[0]);
	printArray(myArray4, n);
	cout << "Size: " << n << "\nMedian: " << median(myArray4, n) << endl;
}
