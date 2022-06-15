// This program illustrate code to find prime factors of given number

#include<bits/stdc++.h>

using namespace std;

void primeFactors(int n){
    int spf[n] = {0};   // spf --> smallest prime factors

    for (int i = 2; i <= n; i++)
    {
        spf[i] = i;
    }

    for (int i = 2; i <= n; i++)
    {
        if(spf[i] == i){
            for (int j = i*i; j <= n; j+=i){
                if(spf[j] == j){
                    spf[j] = i;
                }
            }
        }
    }
    
    while (n!=1)
    {
        cout << spf[n] << " ";
        n = n/spf[n];
    }
    
}


int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    primeFactors(n);
    return 0;
}