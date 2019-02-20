/*
Title: Programming Assignment 5 - CoolSort
Abstract: Added CoolSortFunction
ID: 003034069
Date: 2/19/19
*/

#include <iostream>
using namespace std;

void coolSort(int arr[], int arrLen, int h[], int hLen)
{

	for (int i = 0; i < hLen; i++) // i - Index of which number in H we are using
	{
		for (int j = 0; j < h[i]; j++) // For each number in H, we will have to create H[i] sub-arrays.
									   // j - Index of the current sub-array
		{
			for (int k = j + h[i]; k < arrLen; k += h[i]) // Now iterate through the main array,
														  // starting at (j + h[i]) (this will be the second element in this particular sub-array)
														  // and only selecting each h[i]'th element
														  // k - Index of the value being focused on in the main array
			{
				int tmp = arr[k]; // Save this value, we will soon compare it to the other values in the sub-array and insert it in the correct place

				int m = k - h[i]; // m - Used so that we can scan backwards through the array,
								  // again at an interval of h[i] so that we are only checking values in the current sub-array

				while (m >= j & arr[m] > tmp) // Scan backwards through the sub array and insert tmp at the correct position
				{
					// If arr[m] is greater than temp, we have to shift the value in arr[m] over by h[i] positions
					arr[m + h[i]] = arr[m];
					m = m - h[i];
				}
				arr[m + h[i]] = tmp; // Finally, insert tmp in the correct position
			}
		}
	
	}
}

void printArray(int arr[], int n)
{
	cout << "[ ";
	for (int i = 0; i < n - 1; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << arr[n - 1] << " ]";
}

int main()
{
	// Sample Test Case 1

	int arr1[] = { 2, 5, 6, 4, 10, 9, 8, 1, 10, 5};
	int h1[] = { 5, 3, 1 };

	int arrLen1 = sizeof(arr1) / sizeof(arr1[0]);
	int hLen1 = sizeof(h1) / sizeof(h1[0]);

	cout << "Sample Test Case 1" << endl << endl;
	cout << "Input = ";
	printArray(arr1, arrLen1);
	cout << " and H = ";
	printArray(h1, hLen1);

	coolSort(arr1, arrLen1, h1, hLen1);

	cout << "\nOutput = ";
	printArray(arr1, arrLen1);
	cout << endl << endl;

	// Sample Test Case 2

	int arr2[] = { 2, 5, 9, 4, 10, 7, 8, 1, 11, 5 };
	int h2[] = { 5, 2, 1 };

	int arrLen2 = sizeof(arr2) / sizeof(arr2[0]);
	int hLen2 = sizeof(h2) / sizeof(h2[0]);

	cout << "Sample Test Case 2" << endl << endl;
	cout << "Input = ";
	printArray(arr2, arrLen2);
	cout << " and H = ";
	printArray(h2, hLen2);

	coolSort(arr2, arrLen2, h2, hLen2);

	cout << "\nOutput = ";
	printArray(arr2, arrLen2);
	cout << endl << endl;
}
