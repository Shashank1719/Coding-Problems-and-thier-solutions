#include<bits/stdc++.h>

using namespace std;

int findElement(int arr[], int key, int n){
    int low=0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == key) return mid;
        if(arr[low] < arr[mid]){
            if(key >= arr[low] && key < arr[mid]){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        else{
            if(key <= arr[high] && key > arr[mid]){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
    }
    return -1;
}


int main()
{
    int arr1[] = { 5, 6, 7, 8, 9, 10, 1, 2, 3 };
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int key = 3;
    int index = findElement(arr1, key, n);
    if(index == -1){
        cout << "Array Does not contain Element: " << key << endl;
    }else{
        cout << "Element found at index: " << index << endl;
    }
    return 0;
}


// Recursive way of above method.
/*int search(int arr[], int low, int high, int key){
        while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == key) return mid;
        if(arr[low] < arr[mid]){
            if(key >= arr[low] && key < arr[mid]){
                high = mid-1;
                search(arr, low, high, key);
            }else{
                low = mid+1;
                search(arr, low, high, key);
            }
        }
        else{
            if(key <= arr[high] && key > arr[mid]){
                low = mid+1;
                search(arr, low, high, key);
            }else{
                high = mid-1;
                search(arr, low, high, key);
            }
        }
    }
    return -1;
}
*/