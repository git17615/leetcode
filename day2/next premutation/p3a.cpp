#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
        void helper(vector<int>& nums, int index, int n, set<vector<int>>& uniquePerms){
            if(index == n){
                uniquePerms.insert(nums);
                return;
            }
            for(int i = index; i<n; i++){
                swap(nums[i], nums[index]);
                helper(nums, index+1, n, uniquePerms);
                swap(nums[i], nums[index]);
            }
        }
    
    public:
    void nextPermutation(vector<int>& nums){
        int n = nums.size();
        set<vector<int>> uniquePerms;

        helper(nums, 0, n, uniquePerms);

        vector<vector<int>> ans(uniquePerms.begin(),uniquePerms.end());
        int m = ans.size();

        for(int i = 0; i < m; i++){
            if(ans[i] == nums){
                vector<int> nextPerm = ans[(i+1)%m];
                for(int j = 0; j < n; j++){
                    nums[j] = nextPerm[j];
                }
                break;
            }
        }
    }
};

int main(){
    vector<int> nums= {2,3,1};
    Solution sol;
    sol.nextPermutation(nums);

    for(int num: nums){
        cout << num << " ";
    }
    return 0;
}