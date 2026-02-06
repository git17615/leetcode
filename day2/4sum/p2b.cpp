#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int>> fourSum(vector<int>& nums, int target){
        int n = nums.size();
        vector<vector<int>> result;
        set<vector<int>> uniqueQuadruplets;

        sort(nums.begin(),nums.end());

        for(int i = 0; i<n-3; i++){
            for(int j = i+1; j< n-2; j++){
                long long val = (long long)target - nums[i] - nums[j];
                int low = j+1, high = n-1;

                while(low<high){
                    long long sum = (long long)nums[low] + nums[high];

                    if(sum == val){
                        uniqueQuadruplets.insert({nums[i], nums[j], nums[low],nums[high]});
                        low++;
                        high--;
                    }
                    else if(sum < val ){
                        low++;
                    }else if(sum > val){
                        high--;
                    }
                }
            }
        }
        result.assign(uniqueQuadruplets.begin(),uniqueQuadruplets.end());
        return result;
    }
};


int main(){
    vector<int> nums = {1,0,-1,0,-2,2};
    int target = 0;

    Solution sol;
    vector<vector<int>> result = sol.fourSum(nums,target);

    for(auto quad: result){
        for(int num: quad){
            cout << num <<" ";
        }
        cout<<endl;
    }
    return 0;
}