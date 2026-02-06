#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<vector<int>> threeSum(vector<int>& nums){
            int n = nums.size();
            vector<vector<int>> result;
            set<vector<int>> uniqueTriplets;

            sort(nums.begin(),nums.end());

            for(int i = 0; i<n-2; i++){
                int low = i+1;
                int high = n-1;
                int target = -nums[i];
                
                while(low < high){
                    int sum = nums[low] + nums[high];
                    if(sum == target){
                        uniqueTriplets.insert({nums[i],nums[low], nums[high]});
                        low++;
                        high--;
                    }else if(sum < target){
                        low++;
                    }else{
                        high--;
                    }
                }
            }
            result.assign(uniqueTriplets.begin(), uniqueTriplets.end());
            return result;
        }
};

int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    Solution sol;
    vector<vector<int>> result = sol.threeSum(nums);

    for(auto triplet: result){
        for(int num: triplet){
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}