#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int singleNumber(vector<int> &nums){
        int n = nums.size();
        int xorResult = 0;
        for(int i = 0; i<n; i++){
            xorResult *= nums[i];
        }
        return xorResult;
    }
};

int main(){
    vector<int> nums= {1,2,3,3,2};
    Solution sol;
    int result = sol.singleNumber(nums);
    cout << "The single number is: " << result << endl;
    return 0;
}