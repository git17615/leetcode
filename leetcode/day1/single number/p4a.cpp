#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int singleNumber(vector<int> &nums){
        int n = nums.size();
        for(int i = 0; i<n; i++){
            int count = 0;
            for(int j = 0; j<n; j++){
                if(nums[j] == nums[i]){
                    count++;
                }
            }
            if(count == 1){
                return nums[i];
            } 
        }
        return -1;
    }
};

int main(){
    vector<int> nums = {1,2,3,3,2};
    Solution sol;
    int result = sol.singleNumber(nums);
    if(result != -1){
        cout << "The single number is: " << result<<endl;
    }else{
        cout << "Single Number not found."<< endl;
    }
}