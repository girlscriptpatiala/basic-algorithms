//Recursive Binary Search 
#include <iostream> 
using namespace std; 
  
// A recursive binary search function. It returns 
// location of tar in given array arr[] if it is present, 
// otherwise -1 
int binarySearch(int arr[], int lb, int ub, int tar) 
{ 
    if (ub >= lb) { 
        int mid = (lb+ub) / 2; 
  
        // If the element is present at the middle 
         
        if (arr[mid] == tar) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mid] > tar) 
            return binarySearch(arr, lb, mid - 1, tar); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mid + 1, ub, tar); 
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
} 
  
int main(void) 
{ 
    int arr[] = { 2, 3, 4, 10, 40 }; //You can also take array input from the user
    int tar = 7; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = binarySearch(arr, 0, n - 1, tar); 
    if(result == -1)
    cout << "Element is not present in array";
    else
    cout << "Element is present at index " << result; 
    return 0; 
} 