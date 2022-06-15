// This program illustrate how to solve inclusion-exclusion problem
// can be useful in those cases where we have to find number of item/number of ways --> Ex: find numbers which is between 1 to 1000 and divisible by 5 or 7

#include<bits/stdc++.h>

using namespace std;

void inclusionExclusion(int num,int a, int b){
    int c1 = num/a;
    int c2 = num/b;
    int c3 = num/(a*b);
    cout << "Number of elements which is divisible by " << a << " and " << b << " between 1 to " << num << " is: " << c1+c2-c3 << endl;
}

int main()
{
    int n, a, b;
    cout << "Enter Number: ";
    cin >> n;
    cout << "Enter two numbers which you wants to check divisibilty with n: ";
    cin >> a >> b;
    inclusionExclusion(n,a,b);
    return 0;
}