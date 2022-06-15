#include<bits/stdc++.h>

using namespace std;

int checkPowerOf2(int n){
    return (n && !(n & (n-1)));
}

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    if(checkPowerOf2(n)){
        cout << "It is power of 2.\n";
    }else{
        cout << "Not a power of 2.\n";
    }

    return 0;
}