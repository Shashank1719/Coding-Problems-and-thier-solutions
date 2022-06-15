// This program gives illustrion for using sieve of eratosthenes to find prime numbers of given number range

#include<bits/stdc++.h>

using namespace std;

void primeNumber(int n){
    int prime[n] = {0};
    for (int i = 2; i <= n; i++)
    {
        if(prime[i] == 0){
            for (int j = i*i; j <= n; j+=i)
            {
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if(prime[i] == 0){
            cout << i << " ";
        }
    }
    cout << endl;
}


int main()
{
    int n;
    cout << "Enter Number: " << endl;
    cin >> n;
    primeNumber(n);

    return 0;
}