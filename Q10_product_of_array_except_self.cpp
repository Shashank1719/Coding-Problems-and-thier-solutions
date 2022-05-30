#include<bits/stdc++.h>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> output;
        if(n<1) return output;
        
        int product=1;
        for(int i=0; i<n; i++){
            product *= nums.at(i);
            output.push_back(product);
        }
        product=1;
        for(int i=n-1; i>0; i--){
            output.at(i) = output.at(i-1)*product;
            product *= nums.at(i);
        }
        output.at(0) = product;
        return output;
    }

int main()
{
    vector<int> v{1,2,3,4};
    vector<int> op = productExceptSelf(v);
    cout << "[";
    for (int i = 0; i < op.size(); i++)
    {
        cout << op[i] << " ";
    }
    cout << "]";
    return 0;
}