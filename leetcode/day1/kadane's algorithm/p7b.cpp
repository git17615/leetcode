#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxSubArray(vector<int> &num){
        int maxSum = num[0];
        int curSum = num[0];
        for(int i = 1; i<num.size(); i++){
            curSum = max(curSum + num[i], num[i]);
            maxSum = max(maxSum, curSum);
        }
        return maxSum;
    }
};

int main(){
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    Solution sol;
    int result = sol.maxSubArray(nums);
    cout << "The maximum sum of sub array is: "<<result<< endl;
    return 0;
}