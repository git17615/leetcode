#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int>> fourSum(vector<int>& nums, int target){
        int n = nums.size();
        vector<vector<int>> result;

        sort(nums.begin(),nums.end());

        for(int i = 0; i<n-3; i++){
            if(i>0 && nums[i] == nums[i-1]) continue;

            for(int j = i+1; j< n-2; j++){
                if(j>i+1 && nums[j] == nums[j-1]) continue;

                int val = target-nums[i] - nums[j];
                int left = j+1;
                int right = n-1;

                while(left < right){
                    int sum = nums[left] + nums[right];
                    if(sum == val){
                        result.push_back({nums[i], nums[j],nums[left],nums[right]});
                        while(left < right && nums[left] == nums[left+1]) left++;
                        while(left < right && nums[right] == nums[right+1]) right--;
                        left++;
                        right--;
                    }else if(sum < val){
                        left++;
                    }
                    else{
                        right--;
                    }
                }

            }
        }return result;
    }
};

int main() {
   Solution sol;
   vector<int> nums = {1, 0, -1, 0, -2, 2};
   int target = 0;


   vector<vector<int>> result = sol.fourSum(nums, target);

   for (auto& quad : result) {
       for (int num : quad)
           cout << num << " ";
       cout << endl;
   }


   return 0;
}