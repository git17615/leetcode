#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void merge(vector<int> &nums1, vector<int> &nums2, int m, int n){
            for(int i = 0; i<n; i++){
                nums1[i+m] = nums2[i];
            }
            sort(nums1.begin(),nums1.end());
        }
};

int main(){
    vector<int> nums1 = {1,2,4,0,0,0};
    vector<int> nums2 = {3,4,6};
    int m = 3;
    int n = 3;

    Solution sol;
    sol.merge(nums1,nums2,m,n);

    cout << "Merged array: ";
    for(int num: nums1){
        cout<< num << " ";
    }
    cout<< endl;    
    return 0;
}