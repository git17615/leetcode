#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int>> merge(vector<vector<int>>& intervals){
        if(intervals.size() <= 1){
            return intervals;
        }

        vector<vector<int>> intervalList = intervals;
        vector<vector<int>> tempList;

        while(!intervalList.empty()){
            vector<int> current = intervalList.front();
            intervalList.erase(intervalList.begin());
            for(size_t i = 0; i < intervalList.size();){
                vector<int> other = intervalList[i];
                if(max(current[0],other[0]) <= min(other[1], current[1])){
                        current[0] = min(current[0], other[0]);
                        current[1] = max(current[1], other[1]);
                    intervalList.erase(intervalList.begin() + i);
                }
                else{
                    i++;
                }
            }
            tempList.push_back(current);
        }
        return tempList;
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