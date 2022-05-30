#include<bits/stdc++.h>

using namespace std;

int KadenAlgorithm(int *arr, int size){
    if(size <=1) return arr[0];
    int curProduct=1, maxProduct=-1, minProduct=0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == 0){
            curProduct = 1;
            if(maxProduct == -1) maxProduct = 0;
            continue;               // [3 -1 4]
        }
        curProduct *= arr[i];
        if(curProduct > maxProduct){        // maxProduct = 3
            maxProduct = curProduct;        // curProduct = -3
        }
        if(curProduct < minProduct){        // minProduct = -3
            minProduct = curProduct;
        }
    }
    if(maxProduct >= 0) return maxProduct;
    else return minProduct;
}

int main()
{
    int size;
    cin >> size;
    int *arr = new int[size];
    // cout << "Enter Array Element: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << KadenAlgorithm(arr, size) << endl;
    
    return 0;
}