#include<bits/stdc++.h>

using namespace std;

int trap(vector<int>& height){
    vector<int> left(height.size());
    int right[height.size()];
    int minLeft = height.at(0);
    int minRight = height.at(height.size()-1);
    int sum=0;

    // Initializing left auxillary vector
    for (int i = 0; i < height.size(); i++)
    {
        if(height.at(i) > minLeft){
            left.at(i) = height.at(i);
            minLeft = height.at(i);
        }else{
            left.at(i) = minLeft;
        }
    }

    // Initializing right auxillary vector
    for (int i = height.size()-1; i >=0 ; i--)
    {
        if(height.at(i) > minRight){
            right[i] = height.at(i);
            minRight = height.at(i);
        }else{
            right[i] = minRight;
        }
    }

    for (int i = 0; i < height.size(); i++)
    {
        sum += (min(left.at(i), right[i])) - height.at(i);
    }
    return sum;
    
}

int main()
{
    vector<int> v{0,1,0,2,1,0,1,3,2,1,2,1};
    int trapped_water = trap(v);
    cout << trapped_water << endl;

    return 0;
}