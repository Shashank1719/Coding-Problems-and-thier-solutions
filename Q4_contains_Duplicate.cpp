#include<bits/stdc++.h>

using namespace std;

bool checkDuplicateElement(int *arr, int size){
    sort(arr, arr+size);
    for (int i = 1; i < size; i++)
    {
        if(arr[i-1] == arr[i]){
            return true;
        }
    }
    return false;
}

int main()
{
    int sizeOfArray;
    // cout << "Enter Size of Array: " << endl;
    cin >> sizeOfArray;
    int array[sizeOfArray];
    // cout << "Enter Array Elements: " << endl;
    for (int i = 0; i < sizeOfArray; i++)
    {
        cin >> array[i];
    }
    if(checkDuplicateElement(array, sizeOfArray)){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;
}