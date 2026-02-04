#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int singleNumber(vector<int> &nums){
        unordered_map<int,int> freq;
        int n = nums.size();
        for(int i =0; i<n; i++){
            freq[nums[i]]++;
        }
        for(int i=0; i<n;i++){
            if(freq[nums[i]] == 1){
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
    if(result!=-1){
        cout<< "The single number is: "<< result << endl;
    }
    else{
        cout<< "Single number not found"<< endl;
    }
    return 0;
}