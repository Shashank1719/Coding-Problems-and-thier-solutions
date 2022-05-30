#include<bits/stdc++.h>

using namespace std;

void maxProfit(int arr[], int n){
    int netProfit=0;
    for (int i = 1; i < n; i++)
    {
        // We are just comparing value to it's previous one, so we didn't have to take load about finding local minima or local maxima.
        if(arr[i] > arr[i-1]){
            netProfit += arr[i] - arr[i-1];
        }
    }
    cout << netProfit << endl;
}

int main()
{
    int n;
    cout << "Enter Size of Array: " <<endl;
    cin >> n;
    int arr[n];
    cout << "Enter Array Elements: " << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    maxProfit(arr, n);
    

    return 0;
}