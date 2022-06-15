// This programme illustrate how to find subsets of given set.
// First blank space on output shows empty spaces.

#include<bits/stdc++.h>

using namespace std;

void findSubsets(int arr[],int n){
    for (int i = 0; i < (1<<n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i & (1<<j)){
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
    
}


int main()
{
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    findSubsets(arr,n);

    return 0;
}