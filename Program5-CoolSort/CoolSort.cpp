/*
Title: Programming Assignment 4 - Sorting
Abstract: Added basic selection sort, selection sort for first k elements, and median function
ID: 003034069
Date: 2/12/19
*/

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
	int i, j, tmp;
	// Iterate through the array
	for (int i = 1; i < n; i++) 
	{
		tmp = arr[i];
		j = i - 1;

		// Shift all the elements over that are great than tmp
		while (j >= 0 && arr[j] > tmp)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = tmp;
	}
}


void printArray(int arr[], int n)
{
	cout << "Array [ ";
	for (int i = 0; i < n - 1; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << arr[n - 1] << " ]" << endl;
}

void coolSort(int arr[], int arrLen, int h[], int hLen)
{
	printArray(arr, arrLen);
	for (int i = 0; i < hLen; h++) // For each number in H
	{
		for (int j = 0; j < h[i]; j++) // Create multiple sub arrays each of size arrLen / h[i]
		{
			for (int k = j; k < arrLen; k += h[i]) // Iterate through the main array, only selecting each h[i] element
			{
				
			}
		}
	}
}

int main()
{
	int arr[] = { 62, 83, 18, 53, 07, 17, 95, 86, 47, 69, 25, 28 };
	int h[] = { 5, 3, 1 };

	int arrLen = sizeof(arr) / sizeof(arr[0]);
	int hLen = sizeof(h) / sizeof(h[0]);

	coolSort(arr, arrLen, h, hLen);
}
