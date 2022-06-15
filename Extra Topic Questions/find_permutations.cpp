// This program illustrate how to find permutation of given string

#include<bits/stdc++.h>

using namespace std;

void permutation(string s, string ans){
    if(s.length() == 0){
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        char savedChar = s[i];
        string ros = s.substr(0,i) + s.substr(i+1);
        permutation(ros,ans+savedChar);
    }
    
}

int main()
{
    string str;
    cout << "Enter String: ";
    cin >> str;
    permutation(str, "");

    return 0;
}