// Find the count of every distinct element in the array
// Calculate the position of each element in sorted array

#include<bits/stdc++.h>

using namespace std;

void countSort(int arr[], int size){
    int maxElement = arr[0];
    for (int i = 0; i < size; i++)
    {
        maxElement = max(maxElement, arr[i]);
    }
    int countArray[size] = {0};
    for (int i = 0; i < size; i++)
    {
        countArray[arr[i]]++;
    }
    for (int i = 1; i <= maxElement; i++)
    {
        countArray[i] += countArray[i-1];
    }
    int outputArray[size];
    for (int i = 0; i < size; i++)
    {
        outputArray[--countArray[arr[i]]] = arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = outputArray[i];
        // cout << outputArray[i] << " ";
    }   
}


int main()
{
    int sizeOfArray;
    cout << "Enter Size of Array: ";
    cin >> sizeOfArray;
    int arr[sizeOfArray];
    cout << "Enter Array Elements: "<< endl;
    for (int i = 0; i < sizeOfArray; i++)
    {
        cin >> arr[i];
    }
    countSort(arr, sizeOfArray);
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}
