//Selection Sort 
#include <bits/stdc++.h> 
using namespace std; 

void swap(int *x, int *y) 
{ 
	int temp = *x; 
	*x = *y; 
	*y = temp; 
} 

void selectionSort(int arr[], int n) 
{ 
	int i, j, min; 

	// One by one move boundary of unsorted subarray 
	for (i = 0; i < n-1; i++) 
	{ 
		// Find the minimum element in unsorted array 
		min = i; 
		for (j = i+1; j < n; j++) 
		if (arr[j] < arr[min]) 
			min = j; 

		// Swap the minimum element with the first element 
		swap(&arr[min], &arr[i]); 
	} 
} 


int main() 
{ 
	int arr[] = {10, 22, 15, 45, 39,40}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	selectionSort(arr, n); 
	cout << "Sorted array: \n"; 
	for (int i=0; i < n; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
	return 0; 
} 


