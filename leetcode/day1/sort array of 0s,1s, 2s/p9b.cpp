#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void colorSort(vector<int> &nums){
        int low = 0;
        int mid = 0;
        int high = nums.size() -1;
        while(mid<=high){
            if(nums[mid] == 2){
                swap(nums[mid],nums[high]);
                high--;
            }
            else if(nums[mid] == 0){
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }else if(nums[mid] == 1){
                mid++;
            }
        }
    }
};

int main(){
    vector<int> nums = {2,0,1,2,0,1};
    Solution sol;
    sol.colorSort(nums);
    cout<<"Sorted array: ";
    for(int num:nums){
        cout<< num << " ";
    }
    cout<<endl;
    return 0;
}