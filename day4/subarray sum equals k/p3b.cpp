#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int subArraySumEqualK(vector<int>& nums, int target){
        int n = nums.size();

        unordered_map<int,int> m;
        m[0] = 1;
        int preSum = 0;
        int count = 0;
        

        for(int i = 0; i<n; i++){
            preSum += nums[i];
            if(m.find(preSum - k) != m.end()){
                count += m[preSum];
            }
            m[preSum]++;
            
        }
        return ans;
    }
};