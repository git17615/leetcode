#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxSubArray(vector<int> &nums){
        int n = nums.size();
        int maxSum = INT_MIN;
        for(int i = 0; i<n; i++){
            int sum = 0;
            for(int j = i; j<n; j++){
                sum += nums[j];
                maxSum = max(maxSum, sum);
            }
        }
        return maxSum;
    }
};

int main(){
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    Solution sol;   
    int result = sol.maxSubArray(nums);
    cout << "The maximum subarray sum is: "<< result<<endl;
    return 0;
}