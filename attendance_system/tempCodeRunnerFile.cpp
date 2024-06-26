// Recursive C++ program to reverse an array
#include <iostream>
using namespace std;

/* Function to reverse arr[] from start to end*/
void rvereseArray(int arr[], int start, int end)
{
	if (start >= end)
	return;
	
	int temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;
	
	// Recursive Function calling
	rvereseArray(arr, start + 1, end - 1);
}	


/* Utility function to print an array */
void printArray(int arr[], int size)
{
for (int i = 0; i < size; i++)
cout << arr[i] << " ";

cout << endl;
}

/* Driver function to test above functions */
int main()
{
	int arr[100],i,n;
	cin>>n;
	for(i=0;i<=n;i++)
	cin>>arr[i];
	
	// Function calling
	rvereseArray(arr, 0, n-1);
	
	// To print the Reversed array
	printArray(arr, n);
	
	return 0;
}
