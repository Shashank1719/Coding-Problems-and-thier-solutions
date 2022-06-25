/* This Program illustrate how to reach end point, when we have to move in multiple directions.
i.e.    START POINT -> O O O O O O O                
                       O O O O O O O
                       O O O O O O O
                       O O O O O O O
                       O O O O O O O -> END POINT

    NOTE: we can move in either +X direction or -Y direction.
    i.e.
        Moving Direction: ---> or ¦
                                  ¦
                                  \/
*/

#include<bits/stdc++.h>

using namespace std;

int countPathMaze(int n, int i, int j){
    if(i==n-1 && j == n-1){
        return 1;
    }
    else if(i>=n || j >= n){
        return 0;
    }

    return countPathMaze(n, i+1, j) + countPathMaze(n, i, j+1);
}


int main()
{
    int sPoint, ePoint;
    cout << "Enter Start Point: ";
    cin >> sPoint;
    
    cout << "Enter End Point: ";
    cin >> ePoint;


    return 0;
}