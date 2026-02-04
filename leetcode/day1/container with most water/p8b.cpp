#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxArea(vector<int> &height){
        int n = height.size();
        int maxArea = 0;
        int left = 0; int right = n-1;
        while(left < right){
            int width = right - left;
            int minHeight  = min(height[left], height[right]);
            int curArea = width * minHeight;
            maxArea  = max(curArea,maxArea);
            
            if(height[right] > height[left]){
                left++;
            }else{
                right--;
            }
        }return maxArea;
    }
};

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    Solution sol;
    int result = sol.maxArea(height);
    cout << "The maximum water the container can contain is: " <<result << endl;
    return 0;
}