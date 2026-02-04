#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    void sortColors(vector<int> &nums){
        int n = nums.size();
        int k = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                swap(nums[i],nums[k]);
                k++;
            }
        }
        int l = k;
        for(int i = k; i<n; i++){
            if(nums[i] == 1){
                swap(nums[i],nums[l]);
                l++;
            }
        }
    }
};

int main(){
    vector<int> nums = {2,0,2,1,1,0};
    Solution sol;
    sol.sortColors(nums);

    cout << "Sorted array: ";   
    for(int num:nums){
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
