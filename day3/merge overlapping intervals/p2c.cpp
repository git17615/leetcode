#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int>> merge(vector<vector<int>>& intervals){
        int n = intervals.size();

        if(n <= 1){
            return intervals;
        }

        sort(intervals.begin(),intervals.end());

        vector<vector<int>> result;
        result.push_back(intervals[0]);

        for(int i = 1; i<n; i++){
            vector<int>& lastInterval = result.back();
            if(intervals[i][0] <= lastInterval[1]){
                lastInterval[1] = max(lastInterval[1],intervals[i][1]);    
            }else{
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
};

int main() {
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    Solution sol;
    vector<vector<int>> merged = sol.merge(intervals);

    for (auto &v : merged)
        cout << "[" << v[0] << "," << v[1] << "] ";
    cout << endl;

    return 0;
}