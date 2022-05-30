#include<bits/stdc++.h>

using namespace std;


// Didn't completed
int main()
{
    int arr[] = {7, 1, 5, 3, 6, 4};
    // int arr[] = {7, 6, 4, 3, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int minElement = arr[0];
    int maxProfit = 0, currProfit=0;
    for (int i = 0; i < size; i++)
    {
        // if(arr[i] < minElement){
        //     minElement = arr[i];
        // }

        // for above commented line of code method 2 is below
        minElement = min(minElement, arr[i]);
        currProfit = arr[i] - minElement;

        // if(currProfit > maxProfit){
        //     maxProfit = currProfit;
        // }

        // for above commented line of code method 2 is below
        maxProfit = max(currProfit, maxProfit);
    }
    cout << maxProfit << endl;
    return 0;
}