#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int>> fourSum(vector<int>& nums){
        int n = nums.size();
        set<vector<int>> uniqueQuadruplets;
        vector<vector<int>> result;
        

        sort(nums.begin(), nums.end());

        for(int i = 0; i<n-3 ;i++){
            for(int j = i+1; j<n-2 ; j++){
                for(int k = j+1; k<n-1; k++){
                    for(int l = k+1; l<n; l++){
                        if(nums[i] + nums[j] + nums[k] + nums[l] == 0){
                            uniqueQuadruplets.insert({nums[i],nums[j],nums[k],nums[l]});
                        }
                    }
                }
            }
        }

        result.assign(uniqueQuadruplets.begin(),uniqueQuadruplets.end());
        return result;
    }
};

int main(){
    vector<int> nums = {1,0,1,0,-2,2};
    Solution sol;
    vector<vector<int>> result = sol.fourSum(nums);

    for(auto quad:result){
        for(int num: quad){
            cout<<num <<" ";
        }
        cout << endl;
    }
    return 0;
}