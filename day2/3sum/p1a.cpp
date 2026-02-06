#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int>> threeSum(vector<int>& nums){
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> uniqueTriplets;
        vector<vector<int>> result;

        for(int i = 0;i<n; i++){
            for(int j = i+1; j<n;j++){
                for(int k = j+1; k<n; k++){
                    if(nums[i]+nums[j] + nums[k] == 0){
                        uniqueTriplets.insert({nums[i],nums[j], nums[k]});
                    }
                }
            }
        }

        result.assign(uniqueTriplets.begin(), uniqueTriplets.end());
        return result;
    }
};

int main(){
    vector<int> nums= {-1,0,1,2,-1,-4};
    Solution sol;
    vector<vector<int>> result= sol.threeSum(nums);

    for(auto triplet: result){
        for(int num: triplet){
            cout<< num << " ";
        }
        cout << endl;
    }
    return 0;
}