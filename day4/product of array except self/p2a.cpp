#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> productExceptSelf(vector<int> &nums){
        vector<int> result;
        int n = nums.size();

        for(int i = 0; i< n; i++){
            int prod = 1;
            for(int j = 0; j<n; j++){
                if(i!=j){
                    prod *= nums[j];
                }
            }
            result.push_back(prod);
        }
        return result;
    }
};