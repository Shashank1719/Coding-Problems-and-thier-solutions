#include<bits/stdc++.h>

using namespace std;

void nextPermutation(vector<int> &nums){
    int size = nums.size(), peakElementIndex=-1;
    if(size==1){
        return;
    }
    // Find the peak element
    for (int i = 1; i < size; i++)
    {
        if(nums.at(i) > nums.at(i-1)){
            peakElementIndex=i;
        }
    }

    // Checking Array is in Descending or not
    if(peakElementIndex==-1){
        for (int i = 0; i < size/2; i++)
            swap(nums.at(i), nums.at(size-i-1));
        return;
    }

    // Find element in the range of peak element to right element
    // (Checking Special Case)
    int index = peakElementIndex;
    for (int i = index; i < size; i++)    {
        if(nums.at(i) > nums.at(peakElementIndex-1) && nums.at(i) < nums.at(index)){
            index = i;
        }
    }
    swap(nums.at(peakElementIndex-1), nums.at(index));
    sort(nums.begin()+peakElementIndex, nums.end());    
}

int main()
{
    vector<int> v;
    int n, element;
    cout << "Enter Size of Array: " << endl;
    cin >> n;
    cout << "Enter Array Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        v.push_back(element);
    }
    nextPermutation(v);
    for (int i = 0; i < n; i++)
    {
        cout << v.at(i) << " ";
    }
    return 0;
}