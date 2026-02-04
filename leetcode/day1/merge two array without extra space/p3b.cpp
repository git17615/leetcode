#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void merge(vector<int> &nums1,const vector<int> &nums2, int m , int n){
        int a = m -1;
        int b = n -1;
        int index = m+n-1;
        while(a >= 0 && b>=0){
            if(nums1[a] <= nums2[b]){
                nums1[index--] = nums2[b--];
            }
            else{
                nums1[index--] = nums1[a--];
            }
        }
        while( b >= 0){
            nums1[index--] = nums2[b--];
        }
    }
};

int main(){
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,4,5};
    int m = 3;
    int n = 3;
    Solution sol;
    sol.merge(nums1,nums2,m,n);
    cout << "Merged Array: ";
    for(int num: nums1){
        cout<< num << " ";
    }
    cout << endl;

}