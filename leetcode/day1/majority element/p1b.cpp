#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
int majorityElement(vector<int> &nums){
    unordered_map<int, int> freq;
    int n = nums.size();

    for(int i = 0; i < n; i++){
        freq[nums[i]]++;
        if(freq[nums[i]] > n/2){
            return nums[i];
        }
    }
    return -1;

}
};

int main(){
    vector<int> nums = {2,2,1,1,2,2,2};
    Solution sol;
    int result = sol.majorityElement(nums);
    if(result != -1){
        cout << "The majority element is: "<< result <<endl;
    }else{
        cout << "Majority element not found." << endl;
    }
}