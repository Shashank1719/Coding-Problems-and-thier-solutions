// This Program illustrate you how backtracking works and how to code it
// Backtracking: backtracking simply help us to find solution of correct path among multiple options.
/*
i.e. 1 donates path open and 0 donates path is closed

    --->1 0 1 0 1               1 0 0 0 0
        1 1 1 1 1   path is     1 1 1 1 0
        0 1 0 1 0   ------>     0 0 0 1 0    
        1 0 0 1 1               0 0 0 1 1
        1 1 1 0 1<---           0 0 0 0 1

    ***** Let's Code *****
*/

#include<bits/stdc++.h>

using namespace std;


/*
arr    --> array containg path options as an input user given
x, y   --> index value to find at that point path is open or not
n      --> size of array
solArr --> Array containg solution path
*/
bool isPathOpen(int** arr, int x, int y, int n){
    if(x < n && y < n && arr[x][y] == 1){
        return true;
    }
    return false;
}

bool ratInMaze(int** arr, int x, int y, int n, int** solArr){

    // base condition
    if(x==n-1 && y == n-1){
        solArr[x][y] = 1;
        return true;
    }

    if(isPathOpen(arr, x, y, n)){
        solArr[x][y] = 1;
        if(ratInMaze(arr, x+1, y, n, solArr)){
            return true;
        }
        if(ratInMaze(arr, x, y+1, n, solArr)){
            return true;
        }
        solArr[x][y] = 0;           // This step is known as backtracking as we step back and changes in our direction towards end point.
        return false;
    }
    return false;
}


int main()
{
    int size;
    cout << "Enter Matrix(Maze) size: ";
    cin >> size;

    int** arr = new int*[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = new int[size];
    }

    // taking arr input values
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }        
    }
    
    
    int** solArr = new int*[size];
    for (int i = 0; i < size; i++)
    {
        solArr[i] = new int[size];
        for (int j = 0; j < size; j++)
        {
            solArr[i][j] = 0;   
        }        
    }


    cout << endl << "Solution Array contains path is : " << endl;
    if(ratInMaze(arr,0,0,size,solArr)){
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout << solArr[i][j] << " ";
            }
            cout << endl;
        }
    }
    

    return 0;
}