#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
    int subArraySumExceptK(vector<int>& nums, int target){
        int n = nums.size();

        int count = 0;

        for(int i =0; i<n; i++){
           int sum = 0;
            for(int j = i; j<n;j++){
                sum += nums[j];
                if(sum == target){
                    count++;
                }
            }
        }
        return count;
    }
};