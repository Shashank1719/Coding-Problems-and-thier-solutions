#include<bits/stdc++.h>
using namespace std;

// n is describing size of array.
class Pair{
    public:
        int minNum;
        int maxNum;
        void getMinMax(int arr[], int n){
            if(n==1){
                minNum = arr[0];
                maxNum = arr[0];
            }
            else{
                minNum = arr[0];
                maxNum = arr[0];
                for (int i = 1; i < n; i++)
                {
                    if(arr[i] < minNum){
                        minNum = arr[i];
                    }
                    else if(arr[i] > maxNum){
                        maxNum = arr[i];
                    }
                }
                cout << "Minimum Number is: " << minNum
                << " and Maximum Number is: " << maxNum;
            }
        }
};

int main(){
    Pair minMax;
    int n;
    cout << "Enter The Size of Array: " << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Array Elements: " << endl;
        cin >> arr[i];
    }
    minMax.getMinMax(arr, n);
    
}