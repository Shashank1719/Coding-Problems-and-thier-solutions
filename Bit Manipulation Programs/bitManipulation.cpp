#include<bits/stdc++.h>

using namespace std;

int getBit(int n, int pos){
    return ((n & (1<<pos)) != 0);
}
int setBit(int n, int pos){
    return (n | (1<<pos));
}
int clearBit(int n, int pos){
    return (n & ~(1<<pos));
}
int updateBit(int n, int pos, int value){
    if(value != 0 || value != 1){
        return -1;
    }
    n = clearBit(n, pos);
    return (n | (value<<pos));
}


int main()
{
    int num, position, choice, value;
    cout << "Enter Number in Binary and position: " << endl;
    cin >> num >> position;
    cout << "Now Please Enter choice: " << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << getBit(num, position);
        break;
    case 2:
        cout << setBit(num, position);
        break;
    case 3:
        cout << clearBit(num, position);
        break;
    case 4:
        cout << "Enter Value to update either 0 or 1: " << endl;
        cin >> value;
        cout << updateBit(num, position, value);
        break;
    
    default:
        cout << num << endl;
        break;
    }
    return 0;
}