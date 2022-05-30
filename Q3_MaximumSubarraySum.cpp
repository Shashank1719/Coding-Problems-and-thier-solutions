#include<bits/stdc++.h>

using namespace std;

void KadenAlgorithm(int *arr, int size){
    int curSum=0, maxSum=0;
    for (int i = 0; i < size; i++)
    {
        curSum += arr[i];
        if(curSum > maxSum){
            maxSum = curSum;
        }
        if(curSum < 0){
            curSum = 0;
        }
    }
    cout << maxSum << endl;
}

int main()
{
    int size;
    cin >> size;
    int *arr = new int[size];
    cout << "Enter Array Element: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    KadenAlgorithm(arr, size);
    
    return 0;
}