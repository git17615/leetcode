#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int majorityElement(vector<int> &nums){
        int n = nums.size();
        if(n == 0) return -1;
        int majority = nums[0];
        int count = 1;
        for(int i = 1; i< n; i++){
            if(nums[i] == majority){
                count++;
            }
            else{
                count--;
                if(count == 0){
                    majority = nums[i];
                    count = 1;
                }
            }
        }
        count = 0;
        for(int i=0; i< n; i++){
            if(nums[i] == majority){
                count++;
            }
        }
        if(count > n/2){
            return majority;
        }
        else{
            return -1;
        }
    }
};

int main(){
    vector<int> nums = {2,2,1,1,2,2,2};
    Solution sol;
    int result = sol.majorityElement(nums);

    if(result != -1){
        cout << "The majority element is: "<< result<< endl;
    }
    else{
        cout << "There is no majority element." << endl;
    }
}