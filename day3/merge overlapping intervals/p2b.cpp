#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int>> merge(vector<vector<int>>& intervals){
        if(intervals.size() <= 1){
            return intervals;
        }

        list<vector<int>> intervalList(intervals.begin(),intervals.end());
        vector<vector<int>> tempList;

        while(!intervalList.empty()){
            vector<int> current = intervalList.front();
            intervalList.pop_front();
            for(auto i = intervalList.begin(); i != intervalList.end();){
                if(max(current[0],(*i)[0]) <= min(current[1], (*i)[1])){
                        current[0] = min(current[0], (*i)[0]);
                        current[1] = max(current[1], (*i)[1]);
                    i = intervalList.erase(i);
                }   
                else{
                    ++i;
                    //pre-increment is more efficient than it++;
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