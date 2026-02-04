#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid){
        int n = grid.size();
        int n2 = n*n;
        int repeated = -1;
        int missing = -1;

        vector<int> freq(n2+1, 0);

        for(int i = 0; i < n; i++ ){
            for(int j = 0; j < n; j++){
                freq[grid[i][j]]++;
            }
        }
        for(int i = 1; i <= n2; i++){
            if(freq[i] == 2){
                repeated = i; 
            } else if(freq[i] == 0){
                missing = i;
            }
        }
        return {repeated,missing};
    }
};

int main(){
    vector<vector<int>>  grid = {
        {1,2},
        {4,4}
    };
    Solution sol;
    vector<int> result = sol.findMissingAndRepeatedValues(grid);
    
    cout << "repeated value:" << result[0] << "and Missing value:" << result[1] << endl;

    return 0;
}