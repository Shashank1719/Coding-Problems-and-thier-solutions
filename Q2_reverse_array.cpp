// Iterative C++ program to reverse an array
#include <bits/stdc++.h>
using namespace std;

/* Function to reverse arr[] from firstElement to lastElement*/
void reverseArray(int arr[], int firstElement, int lastElement)
{
	while (firstElement < lastElement)
	{
		int temp = arr[firstElement];
		arr[firstElement] = arr[lastElement];
		arr[lastElement] = temp;
		firstElement++;
		lastElement--;
	}
}	

/* Utility function to print an array */
void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

/* Driver function to test above functions */
int main()
{
	int n;
    cout << "Enter the size of Element: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter Elements of Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
	displayArray(arr, n);
	
	// Reversing Array
	reverseArray(arr, 0, n-1);
	
	cout << "Reversed array is" << endl;
	
	// Printing Reversed array
	displayArray(arr, n);
	
	return 0;
}
