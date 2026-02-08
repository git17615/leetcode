#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> productExceptSelf(vector<int>& nums){
        int n = nums.size();
        int prod = 1;

        vector<int> result;

        int count = 0;

        for(int i = 0; i<n;i++){
            if(nums[i]) prod *= nums[i];
            else count++;
        }

        for(int i =0; i<n;i++){
            if(nums[i]){
                if(count == 1) result.push_back(0);
                else result.push_back(prod/nums[i]);
            }else{
                if(count == 1) result.push_back(prod);
                else result.push_back(0);
            }
        }
        return result;
    }
};