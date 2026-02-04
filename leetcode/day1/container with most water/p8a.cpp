#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxArea(vector<int>& height){
        int n = height.size();
        int maxWater = 0;
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                int width = j - i;
                int minHeight = min(height[i], height[j]);
                maxWater = max(width*minHeight, maxWater);
            }
        }
        return maxWater;
    }
};

int main(){
    vector<int> height = {3,5,4,1,6};
    Solution sol;
    int result = sol.maxArea(height);
    cout << "The maximum water the container can hold is: " << result << endl;
    return 0;
}