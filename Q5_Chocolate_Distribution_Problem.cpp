#include<bits/stdc++.h>

using namespace std;

int ChocolateDistribution(int arr[], int n, int m){
    if(m==0 || n==0){
        return 0;
    }
    else if(n<m){
        return -1;
    }
    sort(arr, arr+n);
    int minDifference = INT_MAX;
    for (int i = 0; i+m-1 < n; i++)
    {
        int diff = arr[i+m-1] - arr[i];
        if(diff < minDifference)
            minDifference = diff;
    }
    return minDifference;
    
}

int main()
{
    /* int arr[] = { 12, 4,  7,  9,  2,  23, 25, 41, 30,
                  40, 28, 42, 30, 44, 48, 43, 50 };
    */
    // int m = 7; // Number of students

    int arr[] = {7, 3, 2, 4, 9, 12, 56};
    int m = 3; // Number of students
    
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum Difference is: " << ChocolateDistribution(arr, n, m) << endl;
    return 0;
}