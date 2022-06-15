#include<bits/stdc++.h>

using namespace std;

// didn't completed

// int *repeatedNumber(int *arr, int size, int *opArray){
void repeatedNumber(int *arr, int size, int *opArray){
    int *tempArr = (int *)malloc(sizeof(int)*(size+1));
    tempArr = {0};
    for (int i = 0; i < size; i++)
    {
        cout << tempArr[i] << " ";
    }
    
    int missingElement=0, repeatingElement=0;
    for (int i = 1; i < size+1; i++)
    {
        tempArr[arr[i]] += 1;
    }
    for (int i = 1; i < size+1; i++)
    {
        if(tempArr[i] == 0){
            missingElement = i;
        }
        else if(tempArr[i] > 1){
            repeatingElement = i;
        }
    }
    cout << repeatingElement << " " << missingElement << endl;
    // opArray = new int[2];
    // opArray[0] = repeatingElement;
    // opArray[1] = missingElement;
    // cout << opArray[0] << " " << opArray[1] << endl;
    // return opArray;
}

int main()
{
    // int n;
    // cin >> n
    // int *arr = new int[n];

    int *arr = (int *)malloc(5*sizeof(int));
    int *arr2;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    repeatedNumber(arr, 5, arr2);
    // arr2 = repeatedNumber(arr, 5, arr2);
    // cout << arr2[0] << " " << arr2[1] << endl;

    return 0;
}