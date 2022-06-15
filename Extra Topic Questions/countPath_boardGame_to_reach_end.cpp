// This program illustrate how to solve board game question to find path to reach destination point
// i.e. what are different path to reach at destination point

#include<bits/stdc++.h>

using namespace std;

int countPath(int s, int e){
    if(s==e) return 1;
    if(s>e) return 0;
    int count=0;
    for (int i = 1; i < 6; i++)
    {
        count += countPath(s+i,e);
    }
    return count;
}

int main()
{
    int sPOint, ePoint;
    cout << "Enter Starting and End Point: ";
    cin >> sPOint >> ePoint;
    cout << "Total Number of Different paths are: " << countPath(sPOint,ePoint);
    return 0;
}