#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> findRepeatedAndMissingValue(vector<vector<int>> &grid){
        int n = grid.size();
        long long n2 = n*n;
        long long expectedSum = (n2*(n2+1))/2;
        long long expectedSqSum = n2*(n2+1)*(2*n2 + 1)/6;
        long long actualSum = 0;
        long long actualSqSum = 0;

        for(int i=0; i<n; i++){
            for(int j = 0; j<n; j++){
                int num = grid[i][j];
                actualSum += num;
                actualSqSum += (long long) num*num;
            } 
        }

        long long sumDifference = actualSum - expectedSum;
        long long sumSqDifference  = actualSqSum - expectedSqSum;

        long long sum_ab = sumSqDifference/sumDifference;

        int repeated = (sum_ab + sumDifference)/2;
        int missing = (sumDifference - sum_ab)/2;
        return {repeated,missing};
    }
};

int main(){
    vector<vector<int>> grid = {
        {2,3},
        {3,4}
    };
    Solution sol;
    vector<int> result = sol.findRepeatedAndMissingValue(grid);

    cout << "Repeated Value: " <<result[0] << "and Missing Value: " << result[1] << endl;
}

