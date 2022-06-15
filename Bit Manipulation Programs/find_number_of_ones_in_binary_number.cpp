// This Programme illstrate the how to find number of ones in Binary Number
// input n is in decimal format
#include<bits/stdc++.h>

using namespace std;

void findNumberOfOnes(int n){
    int count = 0;
    while(n!=0){
        n = n & (n-1);
        count++;
    }
    cout << "Number of one in given Number: " << count << endl;
}


int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    findNumberOfOnes(n);

    return 0;
}