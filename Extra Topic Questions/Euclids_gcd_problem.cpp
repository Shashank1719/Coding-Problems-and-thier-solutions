// This problem illustrate how to find gcd of a given number using euclid method for better time complexity

#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    while(b!=0){
        int rem = a%b;
        a = b;
        b = rem;
    }
    return a;
}

int main()
{
    int n1,n2;
    cout << "Enter Numbers: ";
    cin >> n1 >> n2;
    cout << "GCD of 2 number is: " << gcd(n1,n2);

    return 0;
}